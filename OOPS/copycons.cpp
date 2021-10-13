#include <iostream>
#include <string.h>
using namespace std;

class A
{

public:
  int b;

  A() : b(0) {}
  A(int a)
  {
    b = a;
  }
  //A(A&a)
  //   { b=a.b;                        //    A proper definition of the copy cons is not needeAs it is created

  //         cout<<"THIS IS CALLED COPYING UNDERSTOOD YOU STUPID\n"<<this->b;

  // }
};
int main()
{ // copies the values intoAnother object
  // exaple if wAn
  A s(10);
  A d(s); // copy constructor

  // Also if i doAA=b then copy cons called
  cout << d.b;

  return 0;
}