// CPP program for the above approach

#include <iostream>

using namespace std;

void printSubstrings(string str)
{

	// First loop for starting index
	for (int i = 0; i < str.length(); i++) {
		string subStr;
		// Second loop is generating sub-string
		for (int j = i; j < str.length(); j++) {
			subStr += str[j];
			cout << subStr << endl;
		}
	}
}

// Driver Code

int main()
{
	string str = "abcd";
	printSubstrings(str);
	return 0;
	// this code is contributed by defcdr
}

// Time complexity: O(N2), where N is the length of the input string.
// Auxiliary Space: O(N), where N is the length of the input string.