#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{

    int t, x1, p1, x2, p2;
    cin >> t;
    while (t--)

    {
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        x1 = x1 * pow(10, p1);
        x2 = x2 * pow(10, p2);
        (x1 == x2) ? cout << "="
                          << "\n"
                   : ((x1 > x2) ? cout << ">"
                                       << "\n"
                                : cout << "<"
                                       << "\n");
    }
    return 0;
}
