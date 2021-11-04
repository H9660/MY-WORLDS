#include<iostream>
#include<string.h>
using namespace std;

class test{

    int a;
    int b;
   
    protected:

    int add(int a, int b);
    friend int mul(test t);     // friend function! Can access the data all the members of the class!
    void set(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    public:

    void accesstest(int a, int b) // this is a public function and is used to access the protected members!
    {
        set(a,b);
        cout<<add(this->a,this->b);
    }
    
};

int mul(test t) 
{
        return t.a*t.b;
}

int test:: add(int a, int b)  // member functions
{
    this->a=a; 
    this->b=b; 
    return a+b;
}

int main()
{
test t;

t.accesstest(10,20);
cout<<"\n";
cout<< mul(t)<<"\n";

return 0;
}