#include <iostream> // this project uses the cncept of pairs in c++.
#include <string.h>
#include <utility>
#include <algorithm>
#include <vector>
#include <limits>
// #define max_size 1000000
using namespace std;
int main()
{
    int size, prev = INT_MIN;
    int arr1[100];
    vector<pair<long, long>> vect;

    cout << "ENTER THE ELEMENTS OF THE ARRAY!"
         << "\n";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
        vect.push_back(make_pair(arr1[i],0));
    }

    sort(vect.begin(), vect.end());

    cout << "DETAILS OF THE ARRAY!"
         << "\n";

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (vect[j].first == vect[i].first && prev != vect[i].first  )
            {
                vect[i].second++;
            }
        }
        cout << vect[i].second << " " << vect[i].first << endl;
        prev = vect[i].first;
    }

    return 0;
}
