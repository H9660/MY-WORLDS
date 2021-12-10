#include <iostream>
#include <string.h>
using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int maxobjs(int arr[], int k, int c, int n)
{
    int max_objs = 0, curr_objs = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[i];
            curr_objs++;

            if (sum > c)
            {
                sum -=arr[i];
                curr_objs--;
                break;
            }

            if (sum >= k && sum <= c)
            {
                max_objs = max(max_objs, curr_objs);
            }
        }

    }
    return max_objs;
}

int main()
{
    int t, n, c, k, i = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> c >> k;
        int *arr = new int[n];
        while (i < n)
        {
            cin >> arr[i];
            i++;
        }
        cout << maxobjs(arr, k, c, n) << "\n";
        i = 0;
    }
    return 0;
}
