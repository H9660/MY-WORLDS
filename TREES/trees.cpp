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
        if(root==NULL) return;
      
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
    return 0;
}