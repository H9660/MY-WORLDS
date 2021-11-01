#include <iostream>
#include <string.h>

using namespace std;
class science // parent class
{
    int a;

public:
    int b;

protected:
    int c;

};

class maths : protected science
{ // derived class
};

class english: public science
{ // non derived class

   public:
    science B;
    void get(int b)
    {    
        B.c=b;                     // error as we are trying to access the protected member
    }
};

int main()
{
    english e;
    e.get(10);

    return 0;
}