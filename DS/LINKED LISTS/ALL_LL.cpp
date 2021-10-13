#include <iostream>
#include <string.h>
using namespace std;

//  **********************************SINGLY LINKED LISTS************************
// struct lnode
// {
//     int data;
//     lnode *n;
// };

// //  adding at empty

// lnode *laddbeg(int data)
// {
//     lnode *top = new lnode;
//     top->data = data;
//     top->n = NULL;
//     return top;
// }
// // adding a new node

// lnode *laddnew(lnode *top, int data)
// {  
//     lnode*temp=top;
//      lnode *nod = new lnode;
//     nod->data = data;
//     nod->n =NULL;
//     temp->n = nod;
//    temp= temp->n;
//     return temp;
// }

// lnode*lcreatelist(lnode *top)
// {   
//     lnode**temp=&top;
//     int num;
//     int d;
//     cout << "HOW MANY ELEMENTS YOU WANT TO ENTER: " << endl;
//     cin >> num;
//     if (num == 0)
//         cout<<"!!!";

//     cout << "ENTER THE DATA FOR THR FIRST NODE: " << endl;
//     cin >> d;
//     top = laddbeg(d);

//     for (int  i = 1; i < num; i++)
//     {
//         cout << "ENTER THE DATA FOR NODE: " << i + 1<<endl;
//         cin >> d;
//         top = laddnew(top, d);
//     }
//     return *temp;
// }

// void lprint(lnode *tail)
// {
//     lnode *ptr = tail;
//   cout << "top";
//     while (ptr != NULL)
//     {
//         cout << "->" << ptr->data;
//         ptr = ptr->n;
//     }
// }
// // deleting the last node

// void ldelend(lnode *top)
// {

//     if (top == NULL)
//     {
//         cout << "LINKED LIST IS EMPTY" << endl;
//         exit(0);
//         cout << "DELETED EMEMENT" << endl;
//     }
//     else
//     {
//         lnode *temp, *temp2 = new lnode;
//         temp = top;
//         // temp2 = top;
//         while (temp->n->n != NULL)
//         {
//             // temp2 = temp;                      deletion by tow pointer
//             temp = temp->n; //  dAetion by single pointer
//         }

//         // temp2->linA = NULL;
//         delete (temp->n);
//         temp->n = NULL;
//     }
// }

// // deleting the node as a specific position

// void ldelpos(lnode *top, int pos)
// {
//     lnode *tem = top;
//     if (top == NULL)
//     {
//         cout << "LIST IS EMPTY!" << endl;
//     }
//     else if (pos == 1)
//     {

//         top = tem->n;
//         delete (tem);
//         tem = NULL;
//     }
//     else
//     {
//         lnode *temp = new lnode;
//         lnode *pre = new lnode;

//         temp = top;
//         while (pos - 1)
//         {
//             pre = temp;
//             temp = temp->n;
//             pos--;
//         }

//         pre->n = temp->n;
//         delete (temp);
//         temp = NULL;
//     }
// }
// //    reversing the linAed list

// lnode *lmyreverse(lnode *top)
// {
//     lnode *p, *n, *c;
//     c = top;
//     p = NULL;

//     while (c != NULL)
//     {
//         n = c->n;
//         c->n = p;
//         p = c;
//         c = n;
//     }
//     return p;
// }

// // *******************************DOUBLY LINKED LISTS*****************************
// struct dlnode
// {
//     int data;
//     dlnode *p = NULL;
//     dlnode *n = NULL;
// };

// dlnode *dladdbeg(int data)
// {
//     dlnode *top = new dlnode;
//     top->data = data;
//     top->n = NULL;
//     top->p = NULL;
//     return top;
// }

// dlnode *daddnew(dlnode *node, int data)
// {
//     dlnode *nx, *temp = new dlnode;
//     temp = node;
//     nx->data = data;
//     nx->n = NULL;
//     temp->n = nx;
//     nx->p = temp;
//     temp = temp->n;
//     return temp;
// }

// dlnode *dcreatelist(dlnode *top)
// {   dlnode*temp=top;
//     int num;
//     int d;
//     cout << "HOW MANY ELEMENTS YOU WANT TO ENTER: " << endl;
//     cin >> num;
//     if (num == 0)
//         return top;

//     cout << "ENTER THE DATA FOR THR FIRST NODE: " << endl;
//     cin >> d;
//     top = dladdbeg(d);

//     for (int  i = 1; i < num; i++)
//     {
//         cout << "ENTER THE DATA FOR NODE: " << i + 1;
//         cin >> d;
//         top = daddnew(top, d);
//     }

//     top=temp;
//     return top;
// }
// *********************************CIRCULAR LINKED LISTS****************************

struct cslnode
{
    int data;
    cslnode *n = NULL;
};

cslnode *csladdbeg(int data)
{
    cslnode *top = new cslnode;
    top->data = data;
    top->n = top;

    return top;
}

cslnode *addnew(cslnode *node, int data)
{
    cslnode *nod = new cslnode;
    nod->data = data;
    nod->n = node->n;
    node->n = nod;
    node = node->n;
    return node;
}

cslnode *cslcreatelist(cslnode *tail)
{
    tail = NULL;
    int d1;
    int i = 0;
    int num;
    cout << "ENTER THE NUMBER OF NODES YOU WANT TO CREATE! " << endl;
    cin >> num;
    if (num == 0)
        return tail;

    cout << "ENTER THE DATA FOR THE 1ST NODE " << endl;
    cin >> d1;
    tail = csladdbeg(d1);
    for (i = 1; i < num; i++)
    {
        cout << "ENTER THE DATA FOR THE NODE: " << i + 1 << endl;
        cin >> d1;
        tail = addnew(tail, d1);
    }
    return tail;
}

void cslprint(cslnode *tail)
{
    cslnode *ptr = tail->n;

    do
    {
        cout << ptr->data << "->";
        ptr = ptr->n;

    } while (ptr != tail->n);
    cout << "TAIL";
}
