#include <iostream>
#include<string>
using namespace std;

int main() {
	
	int t;
	string str1, str2;
	cin>>t;
	while(t--)
	{
	    cin>>str1;
        cin>>str2;

	    
	    int i=0;
	    while(i<sizeof(str1))
	    {
	        if(str1[i]=='?')
	        str1[i]=str2[i];
	        
	        if(str2[i]=='?')
	        str2[i]=str1[i];
	        
	        i++;
	    }
	    
	    if(str1==str2)
	    cout<<"Yes"<<endl;
	    else 
	    cout<<"No";
	}
	return 0;
}
