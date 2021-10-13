#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    int n;
    int k;
    int i = 0;
    int max_sum = 0;
    cin >> n >> k;
    int *arr = new int[n];
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    int curr_sum = 0;

    i = 0;
    while (i < k)
    {
        curr_sum += arr[i];
        i++;
    }
    
    max_sum = curr_sum;
    
    for (i = k; i < n; i++)
    {
        curr_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, curr_sum);
    }

    cout << "THE MAXIMUM SUM IS: " << endl;
    cout << max_sum;

    return 0;
}