#include <iostream>
#include<limits.h>
using namespace std;

int maxm=INT_MIN; // variable to store the highest score

void findmax(int arr[],int n)  
{
    int i=0;
     while(i<n)
	    {
	        if(arr[i]>maxm)
	        maxm=arr[i];
	        i++;
	    }
}

int retcount(int arr[],int n)
{
    int i=0,count=0;
    while(i<n)
    {
        if(arr[i]==maxm)
        count++;
        i++;
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
	    
        if(retcount(arr,n)>1)
        cout<<"peace:)"<<"\n";
        else
        cout<<"fight:("<<"\n";
        
	    i=0;
	}
	
	return 0;
}
