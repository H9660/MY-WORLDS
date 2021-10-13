#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    int chk = 0;
    int i = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (i < n)
        {
            if (n % i == 0)
            {
                chk += i;
            }
            i++;
        }

        if (chk == n)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        chk = 0;
        i = 0;
    }

    return 0;
}