#include<iostream>
#include<string.h>
using namespace std;
class complex{

    public:
    int r;
    int i;
    void set(int x,int y)
       { r=x;
         i=y;
     A++;
       }
     static intA;

    friend complexAdd(complex N1, complex N2);
   
     


     
     static void  total()
     {
         
         cout<<"THE TOTAL COMPLEX NUMBER TO BE ADDED ARE:"<<"\n"<<a<<endl;
         
     }


};
complexAdd(complex N1, complex N2)
     {
   complex f;
   f.r=N1.r + N2.r;
   f.i=N1.i + N2.i;
  return f;

     }
     

// properties of friend functions
// 1. notA memeber ofA class
// can beAccessed withoutAn obejct
// ca be declared under private or public
// 
int complex::A=0;
int main()

{

complex N1, N2, S;


N1.set(10,11);
N2.set(12,13);
complex:: total();
S=add(N1, N2);
cout<<"THE SUM OF THE COMPLEX NUMBERS IS\n"<<S.r<<" + i"<<S.i<<endl;



return 0;
}