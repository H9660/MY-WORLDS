
#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int maxobjs(int arr[], int k,int c, int n)
{
	int max_objs= INT_MIN, curr_objs = 0;
	int totweight=arr[0];

	for (int i = 0; i < n; i++)
	{   
	    if(totweight<k)
	{	totweight = totweight+arr[i];
		curr_objs++;
	}
		
		if (totweight>=k&&totweight<=c)
		{
		   if(curr_objs>max_objs)
		    max_objs=curr_objs;
		    
		    curr_objs=0;
		    totweight=0;
		    i--;
		}
			
	}
	return max_objs;
}


int main()
{
 int t,n,c,k,i=0;
 cin>>t;
 while(t--)
 {
     cin>>n>>c>>k;
     int*arr=new int[n];
     while(i<n)
     {
         cin>>arr[i];
         i++;
     }
     i=0;
     cout<<maxobjs(arr,k,c,n)<<"\n";    
 }
	return 0;
}
