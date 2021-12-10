#include <iostream>
#include <cstddef>
using namespace std;

class treenode
{
public:
    int data;
    treenode *right;
    treenode *left;

    void printtree(treenode *root)
    {
        if (root == NULL)
            return;

        // cout << root->data << " ";      // preorder
        printtree(root->left);
        cout << root->data << " ";      // inorder
        printtree(root->right);
        // cout << root->data << " ";       // postorder
    }

    int isBST(treenode *root)
    {
        static treenode *prev = NULL;
        if (root != NULL)
        {
            if (!isBST(root->left))
                return 0;
            if (prev != NULL && root->data <= prev->data)
            {
                return 0;
            }
            prev = root;
            isBST(root->right);
        }

        return -1;
    }
};

treenode *createnode(int data)
{
    treenode *temp = new treenode;
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

int main()
{
    treenode *root = createnode(1);
    treenode *n1 = createnode(2);
    treenode *n2 = createnode(3);
    treenode *n3 = createnode(4);
    treenode *n4 = createnode(5);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;

    root->printtree(root);
    cout << root->isBST(root);
    return 0;
}
