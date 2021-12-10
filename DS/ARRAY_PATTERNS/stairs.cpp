// #include <iostream>
// #include <string.h>
// using namespace std;

// int suming = 0;
// int sums(int a)
// {
//     if (a == 0)
//         return suming;

//     else
//     {
//         suming += a;
//         a--;
//         return sums(a);
//     }
// }
// int main()
// {

//     int a;
//     cin >> a;
//     cout << sums(a) << "\n";
//     return 0;
// }

#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    int t, x1, p1, x2, p2;
    cin >> t;
    while (t--)

    {
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        if (x1 == x2)
        {
            if (p1 == p2)
                cout << "="
                     << "\n";

            else if (p1 > p2)
                cout << ">"
                     << "\n";
            else
                cout << "<"
                     << "\n";
        }

        if (x1 > x2)
        {
            if (p1 == p2)
                cout << ">"
                     << "\n";

            else if (p1 > p2)
                cout << ">"
                     << "\n";

            else
                cout << "<"
                     << "\n";
        }

        if(x2>x1)
        {
             if (p1 == p2)
                cout << "<"
                     << "\n";

            else if (p1 > p2)
                cout << ">"
                     << "\n";

            else
                cout << "<"
                     << "\n";
        }
    }
    return 0;
}