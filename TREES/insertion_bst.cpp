#include <iostream>
#include <string.h>
using namespace std;
class bsttreenode
{
public:
    int data;
    bsttreenode *right;
    bsttreenode *left;

    void printtree(bsttreenode *root)
    {
        if (root == NULL)
            return;

        // cout << root->data << " ";      // preorder
        printtree(root->left);
        cout << root->data << " "; // inorder
        printtree(root->right);
        // cout << root->data << " ";       // postorder
    }

    void insertnode(bsttreenode *root1, int data)
    {
        bsttreenode *root = root1;
        if (root == NULL)
        {   root=new bsttreenode(root);
            root->data = data;
            return;
        }
        bsttreenode *prev = NULL;
        while (root != NULL)
        {
            prev = root;
            if (root->data == data)
            {
                cout << "A DUPLICATE OF THIS NODE IS FOUND IN THE BST.CAN'T INSERT!"
                     << " ";
                return;
            }
            if (data > root->data)
                root = root->right;

            else
                root = root->left;
        }

        bsttreenode *newchild = new bsttreenode();
        newchild->data = data;
        newchild->left = NULL;
        newchild->right = NULL;
        if (prev->left == NULL)
            prev->left = newchild;
        else
            prev->right = newchild;
    }
};

bsttreenode *createnode(int data)
{
    bsttreenode *temp = new bsttreenode;
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

int main()
{
    bsttreenode *root = createnode(5);
    bsttreenode *n1 = createnode(3);
    bsttreenode *n2 = createnode(6);
    bsttreenode *n3 = createnode(1);
    bsttreenode *n4 = createnode(4);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;

    root->printtree(root);
    cout << "\n";
    root->insertnode(root, 0);

    // root->deletenode(root, 4);
    root->printtree(root);
    return 0;
}