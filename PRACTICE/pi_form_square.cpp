#include <iostream>
#include <string.h>
#include <random>
#include <ctime>
using namespace std;
double doubleRand()
{
    return double(rand()) / (double(RAND_MAX) + 1.0);
}
void findpi(double n)
{
    // srand(static_cast<unsigned int>(clock()));
    double i = 0;
    double x, y;
    double sqpt = 0;
    double cpt = 0;
    while (i < n)
    {
        x = doubleRand();
        y = doubleRand();
        if (pow(x, 2) + pow(y, 2) < 1)
            cpt++;
        sqpt++;

        i++;
    }

    cout << 4 * cpt / sqpt << endl;
}
int main()
{
    double n;
    do
    {
        cin >> n;
        findpi(n);
    } while (n != 0);
    
    return 0;
}