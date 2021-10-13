
#include <iostream>
#include <algorithm>
using namespace std;
int maxi(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    int t, sume=0, sumo=0, i = 0, max_sum = 0, n, arr[100000];
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (i < n)
        {
            cin >> arr[i];
            i++;
        }

        i = 0;

        while (i < n)
        {
            if (i % 2 == 0)
                sume += arr[i];

            else
                sumo += arr[i];

            i++;
        }

        max_sum = maxi(sume, sumo);
        cout << max_sum << endl;
        i = 0;
        sumo = 0;
        sume = 0;
    }

    return 0;
}
