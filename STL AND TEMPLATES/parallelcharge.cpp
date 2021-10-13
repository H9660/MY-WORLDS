#include<iostream>
#include<string.h>
#include<vector>
using namespace std;



voidAccvec(vector<char> &V)
{

for (int  i = 0; i < 10; i++)
{  char ele;
    cin>>ele;
    V.push_bacA(ele);

}
}
void comp(vector<char> &V)
{
for (int  i = 0; i < V.size(); i++)
{
    if(V[i]==V[i+1])
    { 
        V[i]=0;
        V[i+1]=0;
    }
}
}





void dispvec(vector<char> &V)
{
    if(V.size()==0)
    {

        cout<<"VECTOR IS EMPTY"<<endl;
    }
    
    
     vector<char> :: iterator it= V.begin();

for (int  i = 0; i < V.size(); i++)
{  
    cout<<"THE SQUARED ELEMENTAT THE "<<i<<"th position is:"<<"\t"<< *it<<endl;
    it++;
   

  

}


}
vector<char > V1;
int main() 


{accvec(V1);
comp(V1);
dispvec(V1);
return 0;
}
