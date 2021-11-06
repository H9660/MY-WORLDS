#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int arr[100],n, i = 0, curr, curr_sum = 0; // 1 2 3 4 5
    cin >> n;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    i = 0;
    curr = arr[0];
    while (i < n)
    {
        if (curr_sum > 5)
        {
            curr++;
            curr_sum = 0;
            i = curr;
            continue;
        }

        else
            curr_sum += arr[i];
        i++;
    }

    cout<<arr[curr]<<"\n";

    return 0;
}