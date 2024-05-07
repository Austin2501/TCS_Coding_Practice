// Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends. 

// So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

// Count the number of Sunday jack will get within n number of days.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;

    // Convert the input day to lowercase
    for (char& c : s) {
        c = tolower(c);
    }

    // Get the abbreviation of the input day
    string str = s.substr(0, 3);

    // Map abbreviations to corresponding number of remaining days in the week
    unordered_map<string, int> mp;
    mp["mon"]= 6;
    mp["tue"]= 5;
    mp["wed"]= 4;
    mp["thu"]= 3;
    mp["fri"]= 2;
    mp["sat"]= 1;
    mp["sun"]= 0;

    int count = 0;

    // Check if the given number of days is less than the number of days in the starting week
    if (n < mp[str]) {
        cout << -1 << endl; // Task can be completed in the first week
    } else {
        // Calculate the number of full weeks required
        count = n / 7;
        // If there are remaining days, check if they can be completed in an additional week
        if (n % 7 >= mp[str]) {
            count++;
        }
        cout << count << endl;
    }

    return 0;
}

