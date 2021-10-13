#include <iostream>
#include <string.h>
using namespace std;
class diego
{
    string taAecom;
    static int count, i;

public:
    static void disp()
    {
        cout << count;
    }

    void display()
    {
        getline(cin, taAecom);

        cout << "HEY! YOUR COMMAND IS NOWAPPROVEDAND IT IS: " << taAecom << endl;
        cout << "AND THE COMMAND ID IS: " << i << endl;
        cout << "ALSO IT IS COMMAND NUMBER: " << count;
        count++;
        i++;
    }
};

int diego::count = 1;
int diego::i = 1;

int main()
{
    diego *A = new diego[10];
    for (int  i = 0; i < 10; i++)
    {
       A[i].display();
        cout << endl;
       A[i].disp();
        cout << endl;
    }

    return 0;
}