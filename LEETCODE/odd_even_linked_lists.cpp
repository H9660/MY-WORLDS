#include <iostream>
#include <string.h>
#include <list>
using namespace std;
int main()
{
    int i = 0;
    list<int> l1;
    list<int> l2;
    list<int>::iterator it;
    while (i < 6)
    {
        l1.push_back(i);
        i++;
    }

    it = l1.begin();
    i = 0;
    while (i < 6 && it != l1.end())
    {
        if (i % 2 != 0)
            // cout << *it << "\n";
        it++;
        i++;
    }

    it = l1.begin();
    i = 0;
    while (i < 6 && it != l1.end())
    {
        if (i % 2 == 0)
            cout << *it << "\n";
        it++;
        i++;
    }

    return 0;
}