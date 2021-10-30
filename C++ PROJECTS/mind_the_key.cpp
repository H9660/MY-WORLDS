#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{

    int start;
    system("cls");
    srand(time(NULL));
    int s, i = 0, flag = 0, ch, totalplays = 0, wins = 0;
    cout << "RULES ARE SIMPLE: JUST REMEMBER THE CODE DISPLAYED BEFORE YOU AND THEN TYPE IT AFTER IT DISAPPER."
         << "\n";
    cout << "LETS PLAY!"
         << "\n";
    do
    {
        flag = 0;
        totalplays++;
        cout << "THE CODE IS:"
             << "\n";
        s = rand() % 6;
        int *arr = new int[s];
        int *user = new int[s];

        while (i < s)
        {
            arr[i] = rand() % 100;
            cout << arr[i] << " ";
            i++;
        }
        i = 0;

        Sleep(5000);
        system("cls");

        i = 0;

        cout << "\n";

        cout << "NOW WRITE THE CODE HERE: " << endl;
        while (i < s)
        {
            cin >> user[i];
            if (user[i] != arr[i])
                flag = 1;
            i++;
        }
        if (flag == 1)
        {
            cout << "WRONG CODE!"
                 << "\n";
        }

        else
        {
            cout << "HURRAH! YOU WON!"
                 << "\n";
            wins++;
        }

        i = 0;
        cout << "WANT TO PLAY AGAIN(1/0)?"
             << "\n";
        cin >> ch;

    } while (ch == 1);

    if (ch == 0)
    {
        cout << "THANKS FOR PLAYING! " << wins << " OF YOUR ANSWERS WERE CORRECT OUT OF " << totalplays;
    }
    pthread_exit(NULL);
    return 0;
}