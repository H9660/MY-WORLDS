#include <iostream>
#include <string.h>
#include <vector>
#include <unistd.h>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
    string s;
    int prev;
    getline(cin, s);
    vector<int> arr(s.length());
    vector<int> fin;
    int i = 0;
    while (i < s.length())
    {
        arr[i] = s[i];
        i++;
    }

    sort(arr.begin(), arr.end());

    i = 1;
    prev = INT_MIN;
    while (i < arr.size())
    {
        if (arr[i] == arr[i - 1] && prev != arr[i])
        {
            fin.push_back(arr[i]);
            prev = arr[i];
        }

        i++;
    }

    i = 0;
    cout << "REPEATED CHARACTERS ARE: ";
    while (i < fin.size())
    {
        cout << char(fin.at(i)) << " ";

        i++;
    }

    return 0;
}