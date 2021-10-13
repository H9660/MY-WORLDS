    #include <iostream>
    #include <string.h>
    #include <vector>
    using namespace std;
    void sort(vector<int>A, int s)
    {
        int min =A[0];
        int max =A[s - 1];
        for (int  i = 0; i < s; i++)
        {
            if (a[i] >max)
            {max=a[i];
                
            }
        }
        for (int  i = 0; i < s; i++)
        
    {
        if(a[i]<min)
        {
            min=a[i];
            
        }
    }
        cout << "THE MINIMUM ELEMENT IS: " << min<< endl;
        cout << "THE MAXIMUN ELEMENT IS: " << max << endl;


    }
    int main()
    {
        vector<int>A;
        int s;
    

        cin >> s;
        for (int  i = 0; i < s; i++)
        {
            int x;
            cin >> x;
           A.push_bacA(x);

            /* code */
        }
        
        sort(a,s);


        return 0;
    }