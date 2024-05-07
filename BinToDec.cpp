#include <iostream>
using namespace std;

int main()
{
	char binaryNumber[] = "1111"; 
	
	cout << stoi(binaryNumber, 0, 2);

	return 0;
}
// Time complexity: O(n) where n is the length of the given string.

// Auxiliary Space: O(1) 


// C++ program to convert binary to decimal
// #include <iostream>
// using namespace std;

// // Function to convert binary to decimal
// int binaryToDecimal(int n)
// {
// 	int num = n;
// 	int dec_value = 0;

// 	// Initializing base value to 1, i.e 2^0
// 	int base = 1;

// 	int temp = num;
// 	while (temp) {
// 		int last_digit = temp % 10;
// 		temp = temp / 10;

// 		dec_value += last_digit * base;

// 		base = base * 2;
// 	}

// 	return dec_value;
// }

// // Driver program to test above function
// int main()
// {
// 	int num = 10101001;

// 	cout << binaryToDecimal(num) << endl;
// }

// Time complexity : O( log n) We can also say time complexity as O(d) where d is number of digits.

// Auxiliary Space : O(1)