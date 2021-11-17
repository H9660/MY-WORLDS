#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

vector<int> timesvect(vector<int> a, int times)
{
    int i = 0, j = 0;
    vector<int> c;
    while (i < a.size())
    {
        j = 0;
        while (j < times)
        {
            c.push_back(a[i]);
            j++;
        }
        i++;
    }
    return c;
}
int main()
{
    int times, i = 0, num, n;
    vector<int> vect;
    cin >> times >> n;
    while (i < n)
    {
        cin >> num;
        vect.push_back(num);
        i++;
    }

    vector<int> vect2 = timesvect(vect, times);

    for (int i = 0; i < vect2.size(); i++)
    {
        cout << vect2[i] << " ";
    }

    return 0;
}