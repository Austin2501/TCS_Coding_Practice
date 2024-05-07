#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int a;
    while (cin >> a)
    {
        arr.push_back(a);
    }
    for (int i =0 ; i<arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}