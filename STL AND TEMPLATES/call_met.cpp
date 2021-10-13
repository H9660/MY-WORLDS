#include<iostream> 
#include<math.h>
using namespace std;
void sqrte(int &a, int &b ); // call by refrence



int main()
{
  
int x,y;
cin>>x>>y;
cout<<"\n";
sqrte(x,y);
cout<<x<<y;
return 0;


}

void sqrte(int &a, int &b)
{ 
cout<<sqrt(a)<<sqrt(b);        // parameters changed




}