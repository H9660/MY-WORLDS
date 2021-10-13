#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int _fli = 0;
    int _flj = 0;
    int mysum = 0;
    int n, m;
    int i = 0;
    int j = 0;
    int flag = 0;
    cin >> n >> m;
    int *arr = new int[n];
    int *brr = new int[m];

    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;

    while (i < m)
    {
        cin >> brr[i];
        i++;
    }

    i = 0;

    int max_close_i = 0;
    int max_close_j = 0;
    int sum;
    int max_sum_so_far = 0;
    cout << "ENTER THE SUM: " << endl;

    cin >> sum;

    cout << "THE CLOSEST PAIR FOUND IS(FIRST ENCOUNTER IF NOT EXCACT ):" << endl;

    while (i < n)
    {
        while (j < m)
        {
            mysum = arr[i] + brr[j];

            if (arr[i] + brr[j] == sum)
            {
                max_close_i = i;
                max_close_j = j;
                flag = 1;
                cout << "-> ( " << max_close_i << " , " << max_close_j << " )" << endl;
                //   break;
            }

            if (arr[i] + brr[j] < sum)
            {
                if (arr[i] + brr[j] > max_sum_so_far)
                {
                    flag = 0;
                    max_close_i = i;
                    _fli = i;
                    _flj = j;
                    max_close_j = j;
                    max_sum_so_far = arr[i] + brr[j];
                }
            }

            j++;
        }
        // if (flag == 1)
        //     break;
        j = 0;
        i++;
    }

    if (flag == 0)
        cout << "-> ( " << _fli << " , " << _flj << " )" << endl;

    return 0;
}