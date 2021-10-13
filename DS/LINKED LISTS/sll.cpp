#include <iostream>
#include <string.h>
using namespace std;

class spnode
{
public:
    int row;
    int col;
    int val;
    spnode *nxt;
};

spnode *newnod(spnode *head, int row, int col, int value)
{
    spnode *n = new spnode;
    n->col = col;
    n->row = row;
    n->val = value;
    n->nxt = NULL;
    head = n;

    return head;
}

spnode *createlist(spnode *head)
{
    int i = 0;
    int row, col, val;

    cin >> row >> col >> val;

    head = newnod(head, row, col, val);

    return head;
}
int main()
{

    system("cls");
    int i = 0;
    spnode *head = NULL;
    spnode *temp = head;
    cout << "ENTER THE ELEMENTS IN THE LINKED LIST!" << endl;
    while (i < 5)
    {
        head = createlist(head);
        i++;
    }

    while (temp != NULL)
    {
        cout << temp->row << "-" << temp->col << "-" << temp->val << "->";
        temp = temp->nxt;
    }
    return 0;
}