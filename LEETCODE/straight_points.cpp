#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int xc[100], yc[100];
    int n, midx, midy, prev_slope, curr_slope, flag = 0, flag90 = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> xc[i] >> yc[i];
    }

    midx = xc[n / 2];
    midy = yc[n / 2];

    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
            continue;

        if (xc[i] == midx)
        {
            flag90++;
            continue;
        }

        curr_slope = (yc[i] - midy) / (xc[i] - midx);

        if (abs(curr_slope) == abs(prev_slope))
            flag++;

        prev_slope = curr_slope;
    }

    if (flag90 == n - 1)
    {
        cout << "YES" <<"\n";
        exit(0);
    }

    if (flag == n - 2)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}

