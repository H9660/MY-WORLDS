// #include <iostream>
// #include <string.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *linA;
// };

// node *top = new node;
// void add_at_pos(node *x, int data, int pos);

// int main()
// {
//     int a;
//     top->data = 10;
//     top->linA = NULL;

//     node *N2 = new node;
//     N2->data = 20;
//     N2->linA = NULL;

//     cout << "ENTER THE POSITION TO BE ADDED " << endl;
//     cin >> a;
//     node *temp = new node;

//     add_at_pos(temp, 100, a);

//     int count = 0;
//     node *cc = new node;
//     cc = top;
//     for (int  i = 0; i < 2; i++)
//     {
//         cout<<cc->data;
//         cc = cc->linA;
//         count++;
//     }
//     cout << count;
//     return 0;
// }

// void add_at_pos(node *ptr, int data, int pos)
// {
//     node *ptr2 = new node;
//     ptr2 = top;
//     for (int  i = 0; i < pos; i++)
//     {
//         ptr2 = ptr2->linA;
//     }
//     ptr->linA = ptr2->linA;
//     ptr2->linA = ptr;
//     ptr->data = data;
//     ptr = top;
// }

// **********************************DELETING AT THE END************************************
// #include <iostream>
// #include <string.h>
// #include <process.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *linA;
// };
// void delend(node *top);
// int main()
// {

//     node *top = new node;

//     top->data = 10;
//     top->linA = NULL;

//     node *N2 = new node;
//     N2->data = 20;
//     N2->linA = NULL;
//     top->linA = N2;

//     node *N3 = new node;
//     N3->data = 30;
//     N3->linA = NULL;
//     N2->linA = N3;

//     delend(top);
//    node*ptr=new node;
// ptr=top;
//     ptr = top;
//     while (ptr!= NULL)
//     {
//         cout << ptr->data << "->";
//         ptr = ptr->linA;
//     }
// cout<<"DELETED NODE"<<endl;
//     return 0;
// }

// void delend(node *top)
// {

//     if (top == NULL)
//     {
//         cout << "LINKED LIST IS EMPTY" << endl;
//         exit(0);
//         cout<<"DELETED EMEMENT"<<endl;
//     }
//     else
//     {
//         node *temp, *temp2 = new node;
//         temp = top;
//         // temp2 = top;
//         while (temp->linA->linA != NULL)
//         {
//             // temp2 = temp;                      deletion by tow pointer
//             temp = temp->linA;             //  dAetion by single pointer
//         }

//         // temp2->linA = NULL;
//         delete (temp->linA);
//         temp ->linA= NULL;
//     }
// }

//  ************************************ PLACING THE LAST NODE BEFORE THE FIRST ONE**********

// #include<iostream>
// #include<string.h>
// using namespace std;
// class node
//     {
//     public:
//         int data;
//         node *linA;
//     };
//    node* place_at_front(node *top);
//     int main()
//     {

//         node *top = new node;

//         top->data = 10;
//         top->linA = NULL;

//         node *N2 = new node;
//         N2->data = 20;
//         N2->linA = NULL;
//         top->linA = N2;

//         node *N3 = new node;
//         N3->data = 30;
//         N3->linA = NULL;
//         N2->linA = N3;

//     N2=top;
//     cout<<"THE LINKED LIST BEFORE PLACING IS\t";
//     cout<<endl;
// cout<<"top";
//     while(N2!=NULL)
//     {
//         cout<<"->"<<N2->data;
//         N2=N2->linA;

//     }
// cout<<endl;

//  top= place_at_front(top);
// cout<<"THE LINKED LIST AFTER THE PLACEMENT\t"<<endl;
//     N2=top;
//     cout<<"top";
//     while(N2!=NULL)
//     {
//         cout<<"->"<<N2->data;
//         N2=N2->linA;

//     }

// return 0;

// }
// node*place_at_front(node*top)
// {
//  node*p,*q=new node;
//  p=top;
//  q=NULL;
//  while(p->linA!=NULL)
//  {
//      q=p;
//      p=p->linA;
//  }
// q->linA=NULL;
// p->linA=top;

// top=p;
// return top;
// }

// ***********************DELETING A SPRCIFIC NODE**********************

// #include <iostream>
// #include <string.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *linA;
// };
// void del_pos_nod(node *top, int x);
// int main()
// {
//     int pos;

//     node *top = new node;

//     top->data = 10;
//     top->linA = NULL;

//     node *N2 = new node;
//     N2->data = 20;
//     N2->linA = NULL;
//     top->linA = N2;

//     node *N3 = new node;
//     N3->data = 30;
//     N3->linA = NULL;
//     N2->linA = N3;

//     node *N4 = new node;
//     N4->data = 40;
//     N4->linA = NULL;
//     N3->linA = N4;

//     N2 = top;
//     cout << "THE LINKED LIST BEFORE PLACING IS\t";
//     cout << endl;
//     cout << "top";
//     while (N2 != NULL)
//     {
//         cout << "->" << N2->data;
//         N2 = N2->linA;
//     }
//     cout << endl;

//     cin >> pos;
//     del_pos_nod(top, pos);

//     cout << "THE LINKED LIST AFTER THE PLACEMENT\t" << endl;
//     N2 = top;
//     cout << "top";
//     while (N2 != NULL)
//     {
//         cout << "->" << N2->data;
//         N2 = N2->linA;
//     }

//     return 0;
// }

// void del_pos_nod(node *top, int pos)
// {
//       node*tem=top;
//     if (top == NULL)
//     {
//         cout << "LIST IS EMPTY!" << endl;
//     }
//     else if(pos==1)
//     {

//        top=tem->linA;
//        delete(tem);
//        tem=NULL;

//     }
//     else
//     {
//         node *temp = new node;
//         node *pre = new node;

//         temp = top;
//         while (pos - 1)
//         {
//             pre = temp;
//             temp = temp->linA;
//             pos--;
//         }

// // way 1

//         // pre->linA = temp->linA;
//         // delete (temp);
//         // temp = NULL;

//         //  way2 (not when the node to be deleted is the last node)

//         node*X=temp->linA;
//         temp->data=X->data;
//         temp->linA=X->linA;

//     }
// }

// ************************************ REVERSING THE LINKED LIST**********************

#include <iostream>
using namespace std;

//n=next node ; d=data ; p= previous node; h=top node; c=current node
class node
{
public:
   int d;
   node *linA;
};
node *myreverse(node *top);

node *newNode(int d)
{
   node *new_node = new node;
   new_node->d = d;
   new_node->linA = NULL;
   return new_node;
}
// Node *reverse(Node *h) {
//    Node * p = NULL;
//    Node * c = h;
//    Node * n;
//    while (c != NULL) {
//       n = c->n;
//       c->n = p;
//       p = c;
//       c = n;
//    }
//    return p;
// }
// Node *addOneUtil(Node *h) {
//    Node* res = h;
//    Node *temp, *p = NULL;
//    int carry = 1, sum;
//    while (h != NULL) {
//       sum = carry + h->d;
//       carry = (sum >= 10)? 1 : 0;
//       sum = sum % 10;
//       h->d = sum;
//       temp = h;
//       h = h->n;
//    }
//    if (carry > 0)
//       temp->n = newNode(carry);
//    return res;
// }

int main()
{
   node *h = newNode(1);
   h->linA = newNode(9);
   h->linA->linA = newNode(9);
   h->linA->linA->linA = newNode(9);
   h = myreverse(h);
   cout << "top";
   while (h != NULL)
   {
      cout << "->" << h->d;
      h = h->linA;
   }
   cout << endl;
   return 0;
}

node *myreverse(node *top)
{

   node *p, *n, *c;
   c = top;
   p = NULL;

   while (c != NULL)
   {
      n = c->linA;
      c->linA = p;
      p = c;
      c = n;
   }
   return p;
}

