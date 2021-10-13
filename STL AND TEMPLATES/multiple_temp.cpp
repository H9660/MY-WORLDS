#include<iostream> 
#include<math.h>
using namespace std;

 template<class T1,class T2>
 classABC{
public:
T1 X;
T2 Y;
ABC(T1 x,T2 y){


    this-> X=x;
    this-> Y=y;


 }
 void Square()
 {
this->X=X X;
this->Y=Y Y;
cout<<X<<Y;
 }

 };

 


int main()
 {

ABC<int, int> OB1(10, 12);
 OB1.Square();
 cout<<OB1.X<<OB1.Y;
    return 0;
}