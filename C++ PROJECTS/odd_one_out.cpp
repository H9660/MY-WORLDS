#include <iostream> // this project uses the cncept of pairs in c++.
#include <string.h>
#include <utility>
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
    {
        for (int j = 0; j < size; j++)
        {

            if (pair[i].first == pair[j].first && prev != pair[i].first)
            {
                pair[i].second++;
                prev = pair[i].first;
            }
        }
        cout << pair[i].second << " " << pair[i].first << endl;
    }

    return 0;
}
