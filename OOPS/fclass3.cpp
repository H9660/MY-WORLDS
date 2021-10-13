#include <iostream>
#include <string.h>
using namespace std;
class B;
class A
{
protected:
    int a;

public:
    A(int a)
    {
        this->a = a;
        cout << this->a << "\t";
    }
    friend void swap(A &a, B &b);
};
class B
{

    int b;

public:
    B(int b)
    {
        this->b = b;
        cout << this->b << endl;
    }
    friend void swap(A &a, B &b);
};

void swap(A &x, B &y)
{
    int temp;
    temp = x.a;
    x.a = y.b;
    y.b = temp;
    cout << x.a << "\t" << y.b;
}

int main()
{

    A X(10);
    B Y(20);
    swap(X, Y);

    return 0;
}