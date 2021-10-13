#include<iostream>
#include<string.h>
using namespace std;



template<classA, class b>
class mymate
{
public:
a i;  b f;
mymate(a A, b l)
{

  this->i=A;
  this->f=l;
}


void sqr(A i,   b f)
{

  cout<<i i<<"\n"<<f f;
}
};
// template<classA,class b>
// void func( AA)
// {

//    cout<<"GENERIC VALUE IS"<<"\t"<<a;
 
// }



// void func(double d){

//   cout<<"DOUBLE VALUE IS"<<d;
// }




int main()

{  mymate<int , float> OB1(10, 11.12);
OB1.sqr(10, 11.12);


// int s;
// s=10;
// func(s);
     
return 0;
}