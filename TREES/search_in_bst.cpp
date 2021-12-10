#include <iostream>
#include <string.h>
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
        // cout << root->data << " ";      // inorder
        printtree(root->right);
        // cout << root->data << " ";       // postorder
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

treenode *searchbst(treenode *root, int data)
{
    static int count = 0;
    if (root != NULL)
    {

        if (root->data == data)
        {
            cout << "THE ELEMENT "<<data<<" IS FOUND AND IT TOOK " << count << " RECURSIVE CALL(S)"
                 << "\n";
            return root;
        }

        else if (root->data > data)
        {
            count++;

            return searchbst(root->left, data);
        }
        else
        {
            count++;
            return searchbst(root->right, data);
        }
    }
    else
    cout<<"THE TREE IS EMPTY!"<<endl;
        return NULL;
}

treenode *searchiter(treenode *root, int data)
{
    while (root != NULL)
    {
        if (root->data == data)   
                return root;
       
        else if (root->data > data)
            root = root->left;

        else
            root = root->right;
    }
    return NULL;
}
int main()
{
    treenode *root = createnode(5);
    treenode *n1 = createnode(3);
    treenode *n2 = createnode(7);
    treenode *n3 = createnode(1);
    treenode *n4 = createnode(4);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;

    // root->printtree(root);
    searchbst(root, 4);
    // cout << searchiter(root, 1)->data << " ";
    return 0;
}