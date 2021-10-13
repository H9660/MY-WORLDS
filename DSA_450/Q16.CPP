#include <iostream>
#include <string.h>                 
#include <vector>
#include <algorithm>

using namespace std;

int findDuplicate(vector<int> &nums)
{

    vector<int> cp(nums.size());
    int i = 0;
    while (i < nums.size())
    {
        cp[i] = nums[i];
        i++;
    }

    sort(cp.begin(), cp.end());

    i = 1;

    while (i < cp.size())
    {
        if (cp[i] == cp[i - 1])
            return cp[i];

        i++;
    }

    return -1;
}

int main()
{

    vector<int> A = {1, 3, 4, 5, 5};
    int ans = findDuplicate(A);
    int i = 0;
    cout << ans << endl;
    return 0;
}