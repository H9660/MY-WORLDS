#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
bool f(int a, int b)
{
    return a == b;
}
using namespace std;
int main()
{
  vector<int> v(10);
  for (int i = 0; i < 10; i++)
  {
      cin>>v[i];

  }
    sort(v.begin(), v.end());

     for (int i = 0; i < 10; i++)
  {
      cout<<v[i]<<" ";

  }
  
return 0;
}