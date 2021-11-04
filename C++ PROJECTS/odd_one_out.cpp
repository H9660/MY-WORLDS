#include <iostream> // this project uses the cncept of pairs in c++.
#include <string.h>
#include <utility>
#include<algorithm>
// #define max_size 1000000
using namespace std;
int main()
{
    pair<long, long> pair[100];
    int size, prev = INT_MIN;

    cout << "ENTER THE ELEMENTS OF THE ARRAY!"
         << "\n";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> pair[i].first;
    }

    cout << "DETAILS OF THE ARRAY!"
         << "\n";
    for (int i = 0; i < size; i++)
        sort(pair[i].first, pair[i].first + size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (pair[j].first == pair[i].first && prev != pair[i].first)
            {
                pair[i].second++;
            }
        }
        if (prev != pair[i].first)
        {
            cout << pair[i].second << " " << pair[i].first << endl;
            prev = pair[i].first;
        }
    }

    return 0;
}
