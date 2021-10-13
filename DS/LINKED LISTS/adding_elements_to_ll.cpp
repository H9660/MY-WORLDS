#include<iostream>
#include<string.h>
#include "ALL_LL.h"
using namespace std;

int main()
{
    system("cls");
    int Aey=0;
lnode*top;
// top=lcreatelist(*top);
lnode*n1=new lnode;  
top=n1;
n1->data=10;
n1->n=NULL;
              
lnode*n2=new lnode;
n2->data=20;
n2->n=NULL;
n1->n=n2;

lnode*n3=new lnode;
n3->data=30;
n3->n=NULL;
n2->n=n3;

lnode*temp=new lnode;
// while(temp->n!=NULL)
// {
//   if(temp->data<=Aey&& temp->n->data>=Aey)
//   {
//        lnode*newp=new lnode;
//        newp->data=Aey;
//        newp->n=temp->n;
//        temp->n=newp;

//   }
// temp=temp->n;

// }

lnode*newp=new lnode;
newp->data=Aey;

while(temp->n!=NULL&& temp->n->data<Aey)
{
  temp=temp->n;
}
newp->n=temp->n;
temp->n=newp;
lprint(top);

return 0;
}