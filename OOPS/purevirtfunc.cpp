#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
int A;
    virtual void abc()=0;
};

class B : public A
{

public:
    voidAbc()
    {
        cout << "THIS IS THE MAGIC OF PURE VIRTUAL FUNCTION" << endl;
    }
};

int main()
{ A a;

    B b;
  a=b;
a.abc();

    //Add function=0 to maAe pure function

    return 0;
}