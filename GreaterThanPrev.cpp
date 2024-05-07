// C++ program to implement the
//above approach
#include<bits/stdc++.h>
using namespace std;

// Function to return the count
// of array elements with all
// elements to its left smaller
// than it
int count_elements(int arr[], int n)
{
	
	// Stores the count
	int count = 1;

	// Stores the maximum
	int max = arr[0];

	// Iterate over the array
	for(int i = 1; i < n; i++)
	{
		
		// If an element greater
		// then maximum is obtained
		if (arr[i] > max)
		{
			
			// Increase count
			count += 1;

			// Update maximum
			max = arr[i];
		}
	}
	return count;
}

// Driver Code
int main()
{
	int arr[] = { 2, 1, 4, 6, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << (count_elements(arr, n));
}

// This code is contributed by chitranayal
