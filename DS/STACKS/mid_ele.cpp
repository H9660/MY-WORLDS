#include <iostream>
#include <string.h>
using namespace std;
int *arr;
class stack
{
public:
    int size;
    int top = -1;
    void pop();
    void push(int data);
};

void stack::push(int data)
{
    if (this->top == this->size - 1)
        cout << "SORRY THE STACK IS FULL!" << endl;

    else
    {
        this->top++;
        arr[this->top] = data;
    }
}

void stack::pop()
{
    if (this->top == -1)
        cout << "SORRY THE STACK IS EMPTY!" << endl;
    else
        this->top--;
}

int getMin(stack s){

	int min=arr[s.top];
	while(s.size--)
	{
	    if(arr[s.top]<min)
	    min=arr[s.top];
	    
	    s.pop();
	}
	return min;
}
int main()
{

    stack s;
    cin >> s.size;
    arr = new int[s.size];
    int i = 0;
    while (i < s.size)
    {
        cin >> arr[i];
        s.push(arr[i]);
        i++;
    }
    if (s.size % 2 == 0)
        cout << arr[s.top / 2] << " " << arr[(s.top / 2) + 1] << endl;
    else
        cout << arr[s.top / 2]<<endl;

cout<<getMin(s);
    return 0;
}