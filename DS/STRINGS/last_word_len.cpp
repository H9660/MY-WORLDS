#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int len = 0;
    int i = str.length() - 1;
    while (str[i] == ' ')
    {
        i--;
    }

    while (str[i] != ' ' && i >= 0)
    {
        len++;
        i--;
    }

    cout << int(len) << endl;

    return 0;
}