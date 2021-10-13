#include <bits/stdc++.h>
using namespace std;
int findcon(int a, int b, int c)
{
   if(a+b<=c)
    {
    return 0;
    }
    
    if(b+c<=a)
    {
    return 0;
    }
    
    if(a+c<=b)
   {
    return 0;
   }
  
  return 1;
}
int main()
{
  
  int t,a,b,c;
  int flag=0;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>c;
  
    if(pow(2,a)+pow(2,b)==pow(2,c)&&findcon(a,b,c))
    {
      cout<<"YES"<<endl;
      flag=1;
      continue;
    }
  
    
     if(pow(2,b)+pow(2,c)==pow(2,a)&&findcon(a,b,c))
    {
      cout<<"YES"<<endl;
      flag=1;
      continue;
    }
   
    
     if(pow(2,a)+pow(2,c)==pow(2,b)&&findcon(a,b,c))
    {
      cout<<"YES"<<endl;
      flag=1;
      continue;
    }
    
    if(flag==0)
    cout<<"NO"<<endl;
    
    flag=0;
    
  }
  
  return 0;
}