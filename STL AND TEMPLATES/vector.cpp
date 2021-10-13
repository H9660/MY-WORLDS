// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;



// voidAccvec(vector<int > &V)
// {

// for (int  i = 0; i < 10; i++)
// {  char ele;
//     cin>>ele;
//     V.push_bacA(ele);

//     /  code  /
// }
// }
// void comp(vector<int> &V)
// {
// for (int  i = 0; i < V.size(); i++)
// {
//     if(V[i]==V[i+1])
//     { 
//         V[i]=0;
//         V[i+1]=0;
//     }
// }
// }





// void dispvec(vector<int> &V)
// {
//     if(V.size()==0)
//     {

//         cout<<"VECTOR IS EMPTY"<<endl;
//     }
    
    
//      vector<int> :: reverse_iterator it= V.rbegin();

// for (int  i = 0; i < V.size(); i++)
// {  
//     cout<<"THE SQUARED ELEMENTAT THE "<<i<<"th position is:"<<"\t"<< it<<endl;
//     it++;
   
// }
  

// }



// vector<int > V1;
// int main() 
// {
// // declearingA vector

// // for (int i = 0; i < 10; i++)
// // { 
// //     int ele;
// //     cin>>ele;
    
// //     V1.push_bacA(ele);

// // }

// // for (int i = 0; i < V1.size(); i++)
// //  {
// //     cout<<V1[i]<<endl;
// //  }
// // V1.pop_bacA();
// // for (int i = 0; i < V1.size(); i++)
// //  {
// //     cout<<V1[i]<<endl;
// //  }
//Accvec(V1);

// // vector<int>:: iterator it=  V1.begin();
// //  iterators in c++And I printed the vector using them
// // dispvec(V1);





// //  INSERT FUNCTIION USESAN ITERATORAND NOT ENCOURAGED .  


// // for (int  i = 0; i < 10; i++)
// // {
// // // { cout<< it<<"\n";
// // // it++;
    


// // V1.insert(it+i,i i);

// // i++;
// // }
// // for (int  i = 0; i <10; i++)
// // {cout<<"ELEMENTAT THE ith INDEX IS:\t"<<V1[i]<<"\n";
// // }
// comp(V1);

// // V1.erase(V1.begin(), V1.begi()+3);

// // V1.pop_bacA();
// // V1.bacA();
// // V1.front();
// dispvec(V1);
// return 0;
// }


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int query,tp,q;
   
set<int> s;

void checa( set<int> &s1, int query, int tp)
{
   if(tp==1)
   s1.insert(query); 
    else if(tp==2)
    s1.erase(query);
   else if(tp==3)
    cout<<"Yes"<<"\n";
    else 
    cout<<"No"<<"\n";
    
    
}
int main() {
   
   int query,tp;
   int q;
   cin>>q;
   
   
   for(int i=0;i<q;i++)
   {
       
       cin>>tp>>query;
       
       checa(s,query,tp);
       
       }
   
   
   
    return 0;
}



