#include<iostream>
#include<string.h>
using namespace std;

classA{
int x;
public:

friend bool comp(AA,A b);

A(int i)
{
    x=i;
    cout<<endl;
}

};

bool comp(A X,A Y)
{ 
    
return (X.x>Y.x)?1:0;

}



int main()
{
A y(10), z(12), A(13);
 int w= comp(y,z);       // we use the freind dunction in this case
cout<<w;
return 0;
}