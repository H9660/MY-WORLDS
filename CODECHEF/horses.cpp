#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

int n,ele;
int t;
cin>>t;
while(t--)
{
cin>>n;
int i=0;
vector<int> a;
while(i<n)
{
    cin>>ele;
    a.push_back(ele);
    i++;
}

    vector<int>::iterator ip;
  
    ip=unique(a.begin(), a.begin()+n);
  
    a.resize(distance(a.begin(), ip));
    
    cout<<a[2]-a[1]<<endl;  
}
	return 0;
}
