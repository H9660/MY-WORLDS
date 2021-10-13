#include<iostream>
#include<string.h>
using namespace std;
classA{
public:
A()
{
cout<<endl;
}
intA;
int b;
A(int x, int y)
{
   A=x;
    b=y;

}
 void func()  // THE function of derived class will be calledAnd not of the base class

{

    cout<<a+b<<"\n";

}

};


class B: publicA
{
public:

B(int x, int y)
{
   A=x;
    b=y;

}
   
    void func()
    {
        cout<<a <<b<<"\n";
   }
};

int main()
{

B b(10 ,12);
b.func();  // run time polymorphism
// we use it to prevent the writing of the same code multiple times
// we can use the same pointer for multiple objects


return 0;
}