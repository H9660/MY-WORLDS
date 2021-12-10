#include <iostream> // here if the subarray sum exceeds 5 then the first value of the subarray is skipped!
#include <string.h>

using namespace std;
int main()
{
    int arr[100], n, i = 0, curr, curr_sum = 0;
    cin >> n;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    arr[n] = 0;
    i = 0;
    curr = 0;
    curr_sum = 0;
    while (i <= n)
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

        if (curr == n)
            curr--;
    }

    cout << arr[curr] << "\n";

    return 0;
}