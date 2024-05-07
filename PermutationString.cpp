// C++ program to illustrate
// next_permutation example

// this header file contains next_permutation function
#include <algorithm> 
#include <iostream>
using namespace std;

int main()
{
	string arr = "ABCD";

    next_permutation(arr.begin(), arr.end());
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " "<< arr[3]<< "\n";
// 	sort(arr.begin(), arr.end());
// cout << arr[0] << " " << arr[1] << " " << arr[2] << arr[3]<< "\n";
//     while (next_permutation(arr.begin(), arr.end())){
//         cout << arr[0] << " " << arr[1] << " " << arr[2] << arr[3]<< "\n";
//     }
//     cout<<endl;
//    reverse(arr.begin(), arr.end());
// cout << arr[0] << " " << arr[1] << " " << arr[2] << arr[3]<< "\n";
//     while (prev_permutation(arr.begin(), arr.end())){
//         cout << arr[0] << " " << arr[1] << " " << arr[2] << arr[3]<< "\n";
//     }

    

	return 0;
}
