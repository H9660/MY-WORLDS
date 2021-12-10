#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void printtokens(string str)
{
int i=0;
string res;
while(i<str.length())
{
    if(isalpha(str[i]))
    res+=str[i];

    if(!isalpha(str[i])&&res!="")
    {
        cout<<res<<"\n";
        res="";
        i++;
        continue;
    }

    i++;
}
cout<<res<<"\n";
}

int main()
{
    string str;
    getline(cin, str);
    printtokens(str);

    return 0;
}