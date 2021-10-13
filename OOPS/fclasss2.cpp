#include<iostream>
#include<string.h>
using namespace std;

class sum{
int a;
int b;
friend class op;
public:
// friend class op;
};
   
class op{

public:

void get(sum A)
{    cin>>A.a>>A.b;
    //A.set(10, 20,A);
    int sum=A.a +A.b;
    cout<<sum;
}



};

int main()
{

op A;
sum B;
A.get(B);


return 0;
}