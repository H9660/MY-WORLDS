#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int *a=new int(10);
int arr[100];
cout<<*arr;
// cout<<*a;
// delete a;
// cout<<*a;   //garbage location
return 0;
}