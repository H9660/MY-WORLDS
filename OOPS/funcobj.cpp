#include<iostream>
#include<string.h>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
int arr[10];
int i=0;
while(i<10)
{
    cin>>arr[i];
    i++;
}
i=0;
// sort(10,20, logical_and<int>(10,20));
cout<<logical_and<int>(10,20);
cout<<"\n";
}
while(i<10)
{
    cout<<arr[i]<<" ";
    i++;
}

return 0;
}