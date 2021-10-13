#include<iostream>
#include<string.h>
using namespace std;
template<class T>
class details {
    
    public:
    T name[10];
    T roll;
    details();

details(T S[10], T r)
{

 strcpy(name,S);
 roll=r;
 cout<<name<<"\t"<<r<<"\n";
}

};


int main()
{


 details<char> S2("h", 100);        // MAAINGA PARAMETRISED OBJECT
 details<char> S3=S2;
 return 0;
}