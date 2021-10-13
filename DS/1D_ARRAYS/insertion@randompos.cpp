    #include <iostream>
    #include <string.h>
    #include <stdlib.h>
    #include <ctime>
    using std::srand;
    using namespace std;

    int  addrandom(int *arr, int ele, int &s)
    {
        srand(time(0));
        int pos = rand() % s;
        s++;
        for (int j = s - 1; j > pos - 1; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[pos] = ele;
        cout << "THE ELEMENT IS INSERTED AT INDEX " << pos << " AND POSTION " << pos + 1 << endl
                    << endl;
                    return s;
    }

    int main()
    {
        int *arr, s, i, ele;
        int t;
        char ch;
        cout << "ENTER THE NUMBER OF TEST CASES! " << endl;
        cin >> t;
        while (t--)
        {
            cin >> s;
            cout << endl;
            arr = new int[s];
            i = 0;
            cout << "ENTER THE ARRAY NOW" << endl;
            while (i < s)
            {
                cin >> arr[i];
                i++;
            }
            do
            {
                cout << "ENTER THE ELEMENT TO BE INSERTED!" << endl;
                cin >> ele;
                s = addrandom(arr, ele ,s);
                cout << "THE ARRAY AFTER INSERTION IS" << endl;
                i = 0;
                while (i < s)
                {
                    cout << arr[i] << " ";
                    i++;
                }
                cout<<endl;
                cout << "WANT TO INSERT MORE ELEMETS IN THE ARRAY?(Y/N)" << endl;
                cin >> ch;
            } while (ch == 'y' || ch == 'Y');
        }
        return 0;
    }