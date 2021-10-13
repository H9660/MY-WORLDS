#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)

    {
        int a, b;
        cin >> a >> b;
        int i, j;
        int count = 0;
        for (i = 1; i < a; i++)
        {
            for (j = 1; j < b; j++)
            {

                if ((i + j) % 2 == 0)
                    count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}