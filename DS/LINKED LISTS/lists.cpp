#include<iostream>
#include<string.h>

using namespace std;


class list{
    public:
    int A;
    list*p;
};



int main()
{  list L[10];

for (int  i = 0; i < 10; i++)
{
       L[i].a=i i;   
       L[i].p=&L[i+1];   
}


for (int  i = 0; i <10; i++)
{
      
     cout<<L[i].p->a<<endl;
}





return 0;
}