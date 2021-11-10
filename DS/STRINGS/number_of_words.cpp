// #include<iostream>
// #include<string.h>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {

// return 0;
// }

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    int count = 0;
    int i = 0;
    char ch = '"';

    string str;
    string curr = "";
    vector<string> vect;

    getline(cin, str);

    while (i < str.length())
    {
        if (str[i] == ' ')
        {
            vect.push_back(curr);
            curr = "";
            count++;
        }
        else
        {
            curr += str[i];
        }
        i++;
    }


    vect.push_back(curr);
    i = 0;
    cout << "THE WORDS IN THE STRING ARE: "<< "\n";

    while (i < vect.size())
    {
        cout << ch;
        cout << vect[i];
        cout << ch << " ";
        i++;
    }
    
    return 0;
}