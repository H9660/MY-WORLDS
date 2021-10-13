#include<iostream>
#include<string.h>
using namespace std;
class X{
public:
static int a;
X(){


    cout<<"THIS ISAN OBJECT OF CLASSA"<<endl;
    a ++;
    cout<<a;
}
~X()

{
    cout<<"THIS IS WHEN THE OBJECT IS DESTROYED "<<endl;
    
}


};

int X::a=0;



int main()
{
   
   {
       X x1,x2;
       {
           X x3,x4;

       }
   }
///  only called when g=obj goes out of the  scope

return 0;
}