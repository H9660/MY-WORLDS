#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    int  a[10];
    int  b[10];
    int  c[10];
    int sa, sb, sc;
    cout << "A: " << endl;
    cin >> sa;
    cout << "B: " << endl;
    cin >> sb;
    sc = sa + sb;

    cout << "ACCEPTING THE VALUES OF ARRAY A NOW " << endl;
    for (int i = 0; i < sa; i++)
    {
        cin >> a[i];
    }

cout << "ACCEPTING THE VALUES OF ARRAY B NOW " << endl;
    for (int i = 0; i < sb; i++)
    {
        cin >> b[i];
    }

    int x = 0, y = sb-1, z = sc-1;
    while (x <= sa-1 && y >= 0 )
    {

        if (a[x] <= b[y])
        {
            c[z] = a[x];
            x++;
            z--;
        }

        if (a[x] >= b[y])
        {
            c[z] = b[y];
            y--;
            z--;
        }
    }
cout<<"DISPLAYING THE ELEMENTS OF ARRAY C: "<<endl;
    for (int i = 0; i < sc; i++)
    {
        cout << c[i] << "\t";
    }

    return 0;
}