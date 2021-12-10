#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
class ATM
{
    string name;
    int accno;
    int pin;
    int balance;

public:
    ATM()
    {
        name = "";
        accno = 0;
        pin = 0;
        balance = 0;
    }

    bool check(string name, int accno, int pin, int balance)
    {
        if (this->name == name)
        {
            if (this->accno == accno)
            {
                if (this->pin == pin)
                {
                    if (this->balance >= balance)
                    {
                        return true;
                    }
                    else
                    {
                        cout << "Insufficient Balance" << endl;
                        return false;
                    }
                }
                else
                {
                    cout << "Invalid Pin" << endl;
                    return false;
                }
            }
            else
            {
                cout << "Invalid Account Number" << endl;
                return false;
            }
        }
        else
        {
            cout << "Invalid Name" << endl;
            return false;
        }
    }
    void createaccount(string name)
    {
        this->pin = rand() % 10000;
        this->accno = rand() % 1000000000000;
        this->name = name;
        this->balance = 0;
    }
    void showdetails()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accno << endl;
        cout << "Balance: " << balance << endl;
    }

    void setpin(int newpin)
    {
        this->pin = newpin;
    }

    void widthdraw(int widthdrawl)
    {
        this->balance = this->balance - widthdrawl;
    }

    void deposit(int deposit)
    {
        this->balance = this->balance + deposit;
    }

    int getpin(ATM)
    {
        return this->pin;
    }

    int getbalance(ATM)
    {
        return this->balance;
    }
} cashier;

int main()
{
    srand(time(0));
    int pin;
    int accountno;
    int deposit;
    int widthdraw;
    int ch;
    char choice;
    string name;

    cout << "*************WELCOME TO NEXTBILLION'S ATM**************"
         << "\n\n";
    cout << "0. CREATE ACCOUNT"
         << "\n";
    cout << "1. DEPOSIT"
         << "\n";
    cout << "2. WIDTHDRAW"
         << "\n";
    cout << "3. CHANGE PIN"
         << "\n";
    cout << "4. SHOW DETAILS "
         << "\n";
    cout << "5. EXIT"
         << "\n";
    do
    {
        cout << "ENTER YOUR CHOICE! "
             << "\n";

        cin >> ch;

        switch (ch)
        {

        case 0:
        {
            cout << "Enter your name: ";
            cin >> name;
            cashier.createaccount(name);
            break;
        }

        case 1:
        {
            cout << "ENTER THE AMOUNT TO BE DEPOSITED! "
                 << "\n";
            cin >> deposit;
            // here we will enter the pin
            cashier.deposit(deposit);
            cout << "YOUR NEW BALANCE IS " << cashier.getbalance(cashier) << "\n";
            break;
        }

        case 2:

        {
            cout << "ENTER THE AMOUNT TO BE WIDTHDRAWN! "
                 << "\n";
            cin >> widthdraw;
            // here we will enter the pin
            cashier.widthdraw(widthdraw);
            cout << "YOUR NEW BALANCE IS " << cashier.getbalance(cashier) << "\n";
            break;
        }

        case 3:
        {
            cout << "ENTER YOUR PREIOUS PIN "
                 << "\n";
            cin >> pin;
            if (pin == cashier.getpin(cashier))
            {
                cout << "ENTER YOUR NEW PIN "
                     << "\n";
                cin >> pin;
                cashier.setpin(pin);
            }
            else
            {
                cout << "INVALID PIN "
                     << "\n";
            }

            break;
        }

        case 4:
        {
            cashier.showdetails();
            break;
        }

        case 5:
        {
            cout << "THANK YOU FOR USING OUR ATM"
                 << "\n";
            break;
        }
        }
        cout << "WANT TO USE THE ATM AGAIN?"
             << "\n";
        cin >> choice;

    } while (choice != 'N');
    return 0;
}