#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str = "MY NAME IS KHAN ";
    int finspace = 0, i = 0, nlength, len = 0;
    // getline(cin, str);
    nlength = str.length();

    if (str[str.length() - 1] == ' ')
        nlength--;

    while (i < nlength)
    {
        if (str[i] == ' ')
            finspace = i;

        i++;
    }

    i = finspace;
    while (i + 1 < nlength)
    {
        len++;

        i++;
    }

    cout << len << endl;
    return 0;
}
