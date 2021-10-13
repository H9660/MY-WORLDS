
#include <iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int i=n/2+1;
    int temp;
    while(i<n)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-1-i]=temp;
        
        i++;
    }
    
}
int main() {
	
	int t,n,count=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int*arr=new int[n];
	    int*brr=new int[n];
	    int i=0;
	    while(i<n)
	    {
	        cin>>arr[i];
	        i++;
	    }
	    
	    i=n/2 ;
	    int j=0;
	    
	    while(i<n)
	    {
	        brr[j]=arr[i];
	        j++;
	        i++;
	    }
	    
	    reverse(brr,n);
	    i=0;
	    
	    while(i<n/2)
	    {
	        if(arr[i]==brr[i])
	        count++;
	        
	        i++;
	    }
	    
	    if(count==n/2)
	    cout<<"yes"<<endl;
	    
	    else cout<<"no"<<endl;
	
	
	}
	return 0;
}
    