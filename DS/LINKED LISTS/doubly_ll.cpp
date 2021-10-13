#include<iostream>
#include<string.h>
using namespace std;
class node{
    public:
    int data;
    node*p;
    node*n;
};


int findnum(node*top, int ele)
{ 
    int pos;
    node*temp;

    temp=top;
if(temp->data=ele)
return 1;
else

while(temp->n!=NULL)
{  
     temp=temp->n;
      pos++;
    if(temp->data=ele)
      return pos;



}

return -1;

}

node*addb(int data)
{
    node*top=new node;
    top->data=data;
    top->p=NULL;
    top->n=NULL;
    return top;
}

void addnode(node* top, int data)
{
    node*n1=new node;
    n1->data=data;
    n1->p=top;
    top->n=n1;
    n1->n=NULL;
}
int main()
{
    int ele;

node*top=new node;
top=addb(10);
addnode(top->n,20);
addnode(top->n->n,30);
addnode(top->n->n->n,30);

node*temp;

cin>>ele;
int i;
i=findnum(top,ele);
cout<<"THE ELEMENT IS FOUND AT "<<i;


return 0;
}



