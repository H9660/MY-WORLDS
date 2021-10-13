#include <iostream>
#include <string.h>
using namespace std;
int kadane(int arr[], int n)
{
    int max_sum = INT_MIN;
    int curr_sum = 0;
    int flag = 0;
    int i = 0;
    int s = 0, e;

    while (i < n)
    {
        if (arr[i] < 0)
            flag = 1;

        else
            flag = 0;

        i++;
    }

    i = 0;

    if (flag == 1)
    {
        while (i < n)
        {
            curr_sum += arr[i];
            if (curr_sum < 0)
            {
                curr_sum = 0;
                s = i + 1;
            }

            if (max_sum < curr_sum)
            {
                max_sum = curr_sum;
                e = i;
                s = s;
            }

            i++;
        }
    }

    else
    {
        i = 0;
        curr_sum = arr[0];
        max_sum = INT_MIN;
        while (i < n)
        {
            // curr_sum += arr[i];
            if (curr_sum < curr_sum + arr[i])
            {
                curr_sum = curr_sum + arr[i];
                s = i + 1;
            }
            else
                curr_sum = arr[i];

            max_sum = max(max_sum, curr_sum);
            {
                e = i;
                s = s;
            }

            i++;
        }
    }

    cout << "STARTING INDEX: " << s << endl;
    cout << "ENDING INDEX: " << e << endl;

    return max_sum;
}

int main()

{
    int n;
    cin >> n;
    int *arr = new int[n];
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    int sum = kadane(arr, n);
    cout << sum << endl;
    return 0;
}