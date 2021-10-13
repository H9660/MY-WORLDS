#include<iostream>
#include<string.h>
using namespace std;
class space{
public:
static intA;   // sharted byAll objects (class variables)
int b;
space(int c)
{
    b=c;
    cout<<b<<endl;
  
   A++;
}
static void obj()
{

 cout<<"THE NUMBER OF OBJECTS OF CLASS objects SO FAR:\t"<<a-1<<endl;
}

};


int space::A=1; //Always init outside the class.


int main()
{
spaceA(10), B(11),C(12);
space:: obj();


return 0;
}