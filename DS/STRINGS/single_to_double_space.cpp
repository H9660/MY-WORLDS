#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    vector<char> vect;
    string str;
    getline(cin, str);
    int i = 0;
    while (i < str.length())
    {
        if (str[i] == ' ')
        {
            vect.push_back(' ');
            vect.push_back(' ');
        }
        else
        {
            vect.push_back(str[i]);
        }
        i++;
    }

    i = 0;
    
    while (i < vect.size())
    {
        cout << vect[i];
        i++;
    }
    return 0;
}