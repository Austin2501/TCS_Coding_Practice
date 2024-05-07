#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin>>s;
    int n,sum=0; 
    cin>>n;

    for(auto i:s) 
        sum+=(i-'0');

    sum*=n;

    s=to_string(sum);

    while(s.length()>1)
    {
        sum=0;

        for(auto i:s) 
            sum+=(i-'0');

        s=to_string(sum);
    }
    
    cout<< s;
}