// MY APPROACH!

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
int binsearch(vector<int> arr, int n, int target)
{
    int mid, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int findtarget(vector<int> arr, int n, int target)
{
    int pos = binsearch(arr, n, target);
    if (pos == -1)
    {

        if (target > *max_element(arr.begin(), arr.end()))
        {
            return n;
        }

        if (target < *min_element(arr.begin(), arr.end()))
        {
            return 0;
        }

        int i = 1;
        while (i < n)
        {
            if (target >= arr[i - 1] && target <= arr[i])
                return i;

            i++;
        }
    }
    return pos;
}

int main()
{
    int n;
    vector<int> arr;
    cin >> n;
    int ele;
    int i = 0;
    while (i < n)
    {
        cin >> ele;
        arr.push_back(ele);

        i++;
    }

    int target;
    cin >> target;

    cout << findtarget(arr, n, target) << "\n";
    return 0;
}




// OPTIMUM SOLUTION***************************************************************




// #include <iostream>
// #include <string.h>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int findtarget(vector<int> arr, int n, int target)
// {
//     int mid, low = 0, high = n - 1;
//     while (low <= high)
//     {
//         mid = (high + low) / 2;

//         if (arr[mid] == target)
//             return mid;

//         if (arr[mid] < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     return low;
// }

// int main()
// {
//     int n;
//     vector<int> arr;
//     cin >> n;
//     int ele;
//     int i = 0;
//     while (i < n)
//     {
//         cin >> ele;
//         arr.push_back(ele);

//         i++;
//     }

//     int target;
//     cin >> target;

//     cout << findtarget(arr, n, target) << "\n";
//     return 0;
// }
