// code:CUPA2101

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, i = 0;

    cin >> n;
    vector<int> arr(n);
    vector<int> brr(n);

    while (i < n)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;

    while (i < n)
    {
        cin >> brr[i];
        i++;
    }

    sort(brr.begin(), brr.end(), greater<int>());
    sort(arr.begin(), arr.end());

    i = 0;
    while (i < n)
    {
        cout << "(" << arr[i] << "," << brr[i] << ")";
        if (i < n - 1)
            cout << ",";

        i++;
    }

    return 0;
}



import java.io.*;

class book implements Serializable{
    int totpages,totchaps;
    String name;

    book(String name,int totchaps,int totpages)
    {
        this.name=name;
        this.totchaps=totchaps;
        this.totpages=totpages;
    }

    void display()
    {
        System.out.println("THE DETAILS OF THE BOOK ARE:\n");
        System.out.println("Name:"+name);
        System.out.println("Totchaps:"+totchaps);
        System.out.println("Totpages:"+totpages);
    }
}
public class Main{
   public static void main(String[] args) {
       try{
       book b1=new book("THE LOCKER ROOM", 7,100);
       FileOutputStream f1= new FileOutputStream("book.txt");
       ObjectOutputStream o1= new ObjectOutputStream(f1);
       o1.writeObject(b1);
       }
       catch(Exception e)
       {
           System.out.println(e);
       }

       try{
       FileInputStream f2=new FileInputStream("book.txt");
       ObjectInputStream o2=new ObjectInputStream(f2);
       book b2=(book)o2.readObject();
       b2.display();
       }
       
       catch(Exception e)
       {
           System.out.println(e);
       }

   } 
}


 

