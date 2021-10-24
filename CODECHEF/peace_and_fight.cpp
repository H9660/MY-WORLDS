#include <iostream>
#include<limits.h>
#define max INT_MIN
using namespace std;


void findmax(int arr[],int n)
{
    int i=0;
     while(i<n)
	    {
	        if(max<arr[i])
	        max=arr[i];
	        i++;
	    }
	    
}

int retcount(int arr[],int n)
{
    int i=0,count=0;
    while(i<n)
    {
        if(arr[i]==max)
        count++;
    }
    return count;
}

int main()
{
	int t,n,i=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int*arr=new int[n];
	    while(i<n)
	    {
	        cin>>arr[i];
	        i++;
	    }
	  
	    findmax(arr,n);
        if(retcount>1)
        cout<<""
	    i=0;
	}
	
	return 0;
}
