#include <iostream>
#include <string.h>
#include <chrono>
#include <thread>
#include <iomanip>
#include <cstdlib>
using namespace std;

void space(int n)
{
    for (int i = 0; i < n; i++)
        cout << " ";
}

class fizzard
{
    char captcha[8];

public:
    char ele;
    int check = 0;
    void generatecaptcha()
    {

        for (int i = 0; i < 8; i++)
        {
            captcha[i] = 'a' + rand() % 26; // generating random alphabets!
            cout << captcha[i] << " ";
        }
    }

    int getcaptcha()
    {

        for (int i = 0; i < 8; i++)
        {
            cin >> ele;
            if (ele == captcha[i])
                check++;
        }

        if (check != 8)
        {
            space(42);
            cout << "WRONG CAPTCHA! PLEASE ENTER AGAIN!";
            cout << endl;
            return 0;
        }
        cout << endl;
        check = 0;
        return 1;
    }
} asst;

using namespace std;
int main()
{

    space(50);
    cout << "WELCOME TO FIZZARD!" << endl
         << endl;
    space(38);

    cout << "CAPTCHA: ENTER THE BELOW TEXT TO CONTINUE" << endl;
    space(50);

    asst.generatecaptcha();

    cout << endl;
    space(50);

    while (!asst.getcaptcha())
        space(50);

    return 0;
}