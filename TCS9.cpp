#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr;
    int k;
    cin >>k;
    int a;
    while(cin>>a){
        arr.push_back(a);
    }
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());

    for(auto i: arr){
        cout<<i<<" ";
    }
}

// void Rotateeletoright(int arr[], int n, int k)
// {
//   // Reverse first n-k elements
//   Reverse(arr, 0, n - k - 1);
//   // Reverse last k elements
//   Reverse(arr, n - k, n - 1);
//   // Reverse whole array
//   Reverse(arr, 0, n - 1);
// }

// void Rotateeletoleft(int arr[], int n, int k)
// {
//   // Reverse first k elements
//   Reverse(arr, 0, k - 1);
//   // Reverse last n-k elements
//   Reverse(arr, k, n - 1);
//   // Reverse whole array
//   Reverse(arr, 0, n - 1);
// }