#include <iostream>
#include <string.h>
using namespace std;
void squares(int r, int c)
{
    int k=1;

  for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)

        {    if(j>=i)
            cout<<k*k<<" ";
            k++;
        }
        cout<<endl;
    }

}

int main()
{
    int r, c;
    cin >> r >> c;
    squares(r,c);

    return 0;
}

// #include <iostream>
// #include <string.h>
// using namespace std;
// #define ROWS 3
// #define COLS 3

// void func(int array[ROWS][COLS])
// {
//     int i, j, k = 1;

//     for (i = 0; i < ROWS; i++)
//     {
//         for (j = 0; j < COLS; j++)
//         {
//             array[i][j] = k * k;
//             k++;
//         }
//     }
// }

// int main()
// {
//     int x[ROWS][COLS];

//     func(x);

//     for (int i = 0; i < ROWS; i++)
//     {
//         for (int j = 0; j < COLS; j++)
//         {
//             cout << x[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }