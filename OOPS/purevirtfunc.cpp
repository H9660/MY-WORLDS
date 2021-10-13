#include <iostream>
#include <string.h>
using namespace std;
classA
{
public:
intA;
    virtual voidAbc()=0;
};

class B : publicA
{

public:
    voidAbc()
    {
        cout << "THIS IS THE MAGIC OF PURE VIRTUAL FUNCTION" << endl;
    }
};

int main()
{ AA;

    B b;
  A=&b;
A->abc();

    //Add function=0 to maAe pure function

    return 0;
}