// C++ program to print diamond shape
// with 2n rows
#include <bits/stdc++.h>
using namespace std;

// Prints diamond pattern with 2n rows
void printDiamond(int n)
{
	int space = n - 1;

	// run loop (parent loop)
	// till number of rows
	for (int i = 0; i < n; i++)
	{
		// loop for initially space,
		// before star printing
		for (int j = 0;j < space; j++)
			cout << " ";

		// Print i+1 stars
		for (int j = 0; j <= i; j++)
			cout << "* ";

		cout << endl;
		space--;
	}

	// Repeat again in reverse order
	space = 0;

	// run loop (parent loop)
	// till number of rows
	for (int i = n; i > 0; i--)
	{
		// loop for initially space,
		// before star printing
		for (int j = 0; j < space; j++)
			cout << " ";

		// Print i stars
		for (int j = 0;j < i;j++)
			cout << "* ";

		cout << endl;
		space++;
	}
}

// Driver code
int main()
{
	printDiamond(10);
	return 0;
}

// This is code is contributed
// by rathbhupendra

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n, i = 0, m = 0, j, k, pre, post;

// 	int arr[1000];
// 	cin >> n;
// 	while (i < n)
// 	{
// 		cin >> arr[i];
// 		i++;
// 	}

// 	i = 0;

// 	while (i < n)
// 	{

// 		for (j = 0; j < i; j++)
// 		{
// 			if (arr[i] == arr[j])
// 				pre = 1;
// 		}
// 		pre = 0;

// 		for (j = i + 1; j < n; j++)
// 		{
// 			if (arr[i] == arr[j])
// 				post = 1;
// 		}
// 		post = 0;

// 		if (post == 1 && pre == 1)
// 			m++;

// 		i++;
// 	}

// 	cout << m << endl;

// 	return 0;
// }