#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int isspecial(char ch)
{
    if (!(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || (int)ch >= 0 && (int)ch <= 9))
        return 1;
    return 0;
}

int main()
{

    string pass;
    getline(cin, pass);

    int num = 0, ochar = 0, i = 0;
    while (i < pass.length())
    {

        if (isspecial(pass[i]))
            ochar++;

        else
            num++;

        i++;
    }

    if (num == 0 || ochar == 0)
        cout << "THE PASSWORD IS NOT STRONG!"
             << "\n";

    else
        cout << "THE PASSOWRD IS STRONG!"
             << "\n";
    return 0;
}