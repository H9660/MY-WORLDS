#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int i = 0;
int good(vector<string> &arr, int n)
{
    int ctr=0;
    int j = 0;
    while (i < n)
    {
        if (arr[i] == "a")
        {
            j++;
            ctr++;
        }
        if (arr[i] == "e")
        {
            j++;
            ctr++;
        }
        if (arr[i] == "i")
        {
            j++;
            ctr++;
        }
        if (arr[i] == "o")
        {
            j++;
            ctr++;
        }
        if (arr[i] == "u")
        {
            j++;
            ctr++;
        }

        i++;
    }

    if (j >= 5)
        return 1;
    return 0;
}

int worst(vector<string> &arr, int n)
{
    int i = n - 1;
    int j = 5;
    int ctr = 5;
    while (i >= 0)
    {
        if (arr[i] == "a" && ctr == 1)
        {
            j--;
            ctr--;
        }
        if (arr[i] == "e" && ctr == 2)
        {
            j--;
            ctr--;
        }
        if (arr[i] == "i" && ctr == 3)
        {
            j--;
            ctr--;
        }
        if (arr[i] == "o" && ctr == 4)
        {
            j--;
            ctr--;
        }
        if (arr[i] == "u" && ctr == 5)
        {
            j--;
            ctr--;
        }

        i--;
    }

    if (j >= 0 && j < 5 || j == 5)
        return 1;
    return 0;
}

int main()
{
    int t;
    vector<string> s;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        s.push_back(str);
        vector<string>::iterator ip;

        // Using std::unique
        ip = std::unique(s.begin(), s.end());
        // Now v becomes {1 3 10 1 3 7 8 * * * * *}
        // * means undefined

        // Resizing the vector so as to remove the undefined terms
        s.resize(std::distance(s.begin(), ip));

        if (good)
        {
            cout << "Good" << endl;
        }

        if (worst)
        {
            cout << "Worst" << endl;
        }

        if (!worst && !good)
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}