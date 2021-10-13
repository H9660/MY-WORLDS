// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     string s;

//     cin >> s;

//     std::vector<char> m;

//     for (int i = 0; i < s.size(); i++)

//     {

//         m.push_back(s[i]);
//     }

//     int t;

//     cin >> t;

//     string s1;

//     while (t--)

//     {

//         cin >> s1;

//         int f = 0;

//         for (int i = 0; i < s1.size(); i++)

//         {

//             if (find(m.begin(), m.end(), s1[i]) == m.end())

//             {

//                 f = 1;

//                 break;
//             }
//         }

//         if (f)

//         {

//             std::cout << "No" << std::endl;
//         }

//         else
//         {

//             std::cout << "Yes" << std::endl;
//         }
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int t, k = 1, count = 0, i = 0, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        int *str = new int[n];

        while (i < n)
        {
            cin >> str[i];
            i++;
        }

        i = 0;

        while (str[i] != 1)
            i++;

        while (i < n)
        {
            if (str[i] == 1)
                k++;

            count += k;
            i++;
        }

        cout << count << "\n";
        i = 0;
        count = 0;
        k = 1;
    }
    return 0;
}
