// A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array  of N number of integer values. The task is to find the empty packets(0) of chocolate and push it to the end of the conveyor belt(array).

#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n, j = 0;
  cin >> n;
  vector<int>a(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> a[j];
    if (a[j] != 0)
    {
        j++;
    }
  }
  for (int i = 0; i < n; i++)
  {
      cout << a[i] << " ";
  }
}
