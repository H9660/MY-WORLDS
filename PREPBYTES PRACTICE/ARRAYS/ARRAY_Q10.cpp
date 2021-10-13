#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, i = 0, j, count = 0, flag = 0;
    cin >> n;
    int *arr = new int[n];
    vector<int> ct;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;

    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if (arr[j] > arr[j - 1])        //  IF YOU NEED A DECREASING SUBARRAY THEN JUST REPLACE THE > WITH < 
            {
                count++;
                j++;
            }

            else
            {
                break;
            }
        }

        ct.push_back(count+1);
        count = 0;
        i++;
    }

    cout << *max_element(ct.begin(), ct.end());

    return 0;
}