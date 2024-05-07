#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int k;
    cin >> k;

    int n = str.length();
    int count = 0;

    // Count 'a's in the first substring of length k
    for (int i = 0; i < k; i++) {
        if (str[i] == 'a') {
            count++;
        }
    }

    int maxi = count;

    // Slide the window and update the count of 'a's
    for (int i = k; i < n; i++) {
        // Add the new character to the window
        if (str[i] == 'a') {
            count++;
        }
        // Remove the leftmost character from the window
        if (str[i - k] == 'a') {
            count--;
        }
        // Update the maximum count of 'a's
        maxi = max(maxi, count);
    }

    cout << maxi << endl;

    return 0;
}


// bbbaaababa
// abbbaabbb