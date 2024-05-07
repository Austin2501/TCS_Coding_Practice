#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "Hello, World!";

  cout << str << endl;

  // Convert the string to lowercase.
  for (int i = 0; i < str.length(); i++) {
    str[i] = tolower(str[i]);
  }
cout << str << endl;
  for (int i = 0; i < str.length(); i++) {
    str[i] = toupper(str[i]);
  }
cout << str << endl;
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  cout << str << endl;
  transform(str.begin(), str.end(), str.begin(), ::toupper);

  // Print the string.
  cout << str << endl;

  return 0;
}