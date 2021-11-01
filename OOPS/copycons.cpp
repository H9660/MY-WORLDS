#include <iostream>
#include <string.h>
using namespace std;

class A
{

public:
  int b;
  int *p = &b;
  string name = "HUSSAIN";

  A() : b(0) {}
  A(int a)
  {
    b = a;
  }
  // A(A&a)
  //    { b=a.b;                        //    A proper definition of the copy cons is not needeAs it is created

  //         cout<<"THIS IS CALLED COPYING UNDERSTOOD YOU STUPID\n"<<this->b;

  // }
};
int main()
{
  A child1(20);
  A child2(child1); // shallow copy

  child1.p = new int; // deep copy , we are actually creating a new pointer for the child2 object and
                      // it will prevent the pointers(p)  of child1 and child2 form pointing to the same location.
  cout << child1.b << "\n";
  cout << child2.b << "\n";

  cout << child1.p << "\n";
  cout << child2.p << "\n";
  return 0;
}