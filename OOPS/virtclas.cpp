#include <iostream>
#include <string.h>
using namespace std;

classA
{

public:
    int no;
 void greet()
{      cout<<"hello";

}
    voidAdd(int x, int y)
    {

        cout << x + y << endl;
    }
};

class B : virtual publicA
{
public:
 void greet()
{
    cout<<"MAA";
}
 
    int set1(intA, int b)
    {   no=10;
        returnA + b;
    }
};

class C : virtual publicA
{
public:
    int set2(int x, int y)
    {     
        return x + y;
    }
};

class D : public B,  public C
{
public:
void greet()
{
    cout<<"wcoa";                    // local ones called first
}
    void finaldisp(intA, int b)
    {
        cout <<A + b << endl;
    }
};

int main()
{  

    D d;
    // cout<<d.no;
    d.greet();
    // d.finaldisp(d.set1(10,12), d.set2(13,14));    // we use it to reduceAmbiguity

    return 0;
}