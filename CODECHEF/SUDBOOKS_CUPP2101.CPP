#include <iostream>
#include <stack>
#include <sstream>

using namespace std;
int toint(string num)
{
    int i = 0;
    int x = 0;
    int y = 0;
    string r;
    stringstream geek2(num);

    geek2 >> x;
    if (x == -1)
        return -1;

    while (i < num.length())
    {
        if (num[i] == ' ')
            r = num.substr(i + 1, num.length() - 1);
        i++;
    }

    stringstream geek(r);
    geek >> y;
    return y;
}

int main()
{
    int q, flag = 1;
    stack<int> s;

    cin >> q;

    while (q--)
    {
        string num;
        getline(cin, num);
        int x = toint(num);
        if (x == -1)
        {
            if (s.empty() && &flag != 0)
            {
                cout << "kuchbhi?"
                     << "\n";
                flag = 0;
                continue;
            }
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }

        else
            s.push(x);
    }
    return 0;
}
