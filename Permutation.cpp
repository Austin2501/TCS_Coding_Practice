// C++ program to illustrate
// next_permutation example

// this header file contains next_permutation function
#include <algorithm> 
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3 };

	sort(arr, arr + 3);

    while (next_permutation(arr, arr + 3)){
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    }

   reverse(arr, arr + 3);

    while (prev_permutation(arr, arr + 3)){
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    }

    

	return 0;
}
