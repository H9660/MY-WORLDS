#include <iostream>
#include <string.h>
using namespace std;
int main()

{

    int n;
    cin >> n;
    int *arr = new int[n];
    int max_sum_till_now = INT_MIN;
    int max_ending = 0;

    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;

    while (i < n)
    {
        max_ending += arr[i];
        if (max_sum_till_now < max_ending)
            max_sum_till_now = max_ending;

        if (max_ending < 0)
            max_ending = 0;

        i++;
    }

    i = 0;

    cout << max_sum_till_now;
    
    delete[] arr;

    return 0;
}