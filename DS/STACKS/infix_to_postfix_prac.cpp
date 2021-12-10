#include <iostream>
#include <string.h>
#include <stack>
#include <algorithm>
using namespace std;

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    if (ch == '^')
        return 3;

    return 0;
}
int main()
{

    stack<char> s;
    string infix = "";
    string postfix = "";
    getline(cin, infix);
    int i = 0;
    while (i < infix.length())
    {
        if (infix[i] >= 'A' && infix[i] <= 'Z' || infix[i] >= 'a' && infix[i] <= 'z')
            postfix += infix[i];

        else if (infix[i] == '(')
            s.push(infix[i]);

        else if (infix[i] == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }

            if (!s.empty())
                s.pop();
        }

        else
        {

            if (s.empty() || (precedence(infix[i]) > precedence(s.top())))
                s.push(infix[i]);

            else
            {
                while ((!s.empty()) && pred(infix[i]) < pred(s.top()))
                {
                    postfix += s.top();
                    s.pop();
                }
                s.push(infix[i]);
            }
        }

        i++;
    }

    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    cout << postfix << endl;
    return 0;
}