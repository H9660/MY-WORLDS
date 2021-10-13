#include <bits/stdc++.h>
using namespace std;
int ctr = 0;
int fun(int n)
{
    ctr = 0;
    if (n == 1 || n == 0)
    {
        cout << n + ctr << endl;
    }

    if (n % 2 == 0)
    {
        while (n != 1 && n != 0 && n % 2 == 0)
        {
            n /= 2;
        }

        if (n % 2 != 0)
        {
            goto s1;
        }

        else
            return n;
    }

    if (n % 2 != 0)
    {
    s1:
        ctr = ctr + 1;
        return fun(n - 1) + 1 + ctr;
    }
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << fun(n);
        cout << endl;
    }

    return 0;
}