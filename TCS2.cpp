// Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.

#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int num = n;
  vector<int>arr;

  while(num>0){
    int rem = num%2;
    arr.push_back(rem);
    num = num/2;
  }
  reverse(arr.begin(), arr.end());
//   for(int i=0; i<arr.size(); i++){
//     cout<<arr[i];
//   }

    for(int i= 0; i<n; i++){
        if(arr[i] == 0){
            arr[i] =1;
        }
        else{
            arr[i] = 0;
        }
    }
    int sum = 0;
    for(int i = 0; i<arr.size(); i++){
        sum = sum*10 + arr[i];
    }

  string k = to_string(sum);
  cout<<stoi(k, 0 , 2);

  return 0;
}