#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    int size;
    cin>>n;
    while(n--)
    {
        string s;
        count=0;
        cin>>s;
        size=s.length();
        for(int i=0;i<size;i++)
        {
            if(s[i]=='B')
            count+=2;
            if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' ||s[i]=='Q'||s[i]=='R')
            count++;
        }
        
        cout<<count<<"\n";
    }
}