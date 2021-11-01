 for (int i = 0; i < infix.length(); i++)
    {
        if ((infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= 'a' && infix[i] <= 'z'))
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
            while ((!s.empty()) && pred(infix[i]) < pred(s.top()))
            {
                postfix += s.top();
                s.pop();
            }

            s.push(infix[i]);
        }
    }

    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }