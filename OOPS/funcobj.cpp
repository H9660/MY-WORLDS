#include<iostream>
#include<string.h>
using namespace std;

class b{

    public:
    int c=10;
    void sum(b A, b a)
    { 

         cin>>A.c>>a.c;
          this-> c+= A.c;

       cout<<"THE VALUE OF THIS OBJECT'S C USING FUNCTION IS"<<"\n"<<c;

      

    }
};

int main()
{   

 b x,y,z;
x.sum(y, z);


return 0;
}