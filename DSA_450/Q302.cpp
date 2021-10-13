#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
char *reverse(char *S, int len)
{
    char *copy = new char[len];
    stack<int> s;
    int i = 0;
    while (i < len)
    {
        s.push(S[i]);
        i++;
    }

    i = 0;

    while (i < len)
    {
        copy[i] = s.top();
        s.pop();
        i++;
    }

    return copy;
}
int main()
{
    char str[100];
    cin>>str;
    cout << reverse(str,strlen(str)) << "\n";
    return 0;
}