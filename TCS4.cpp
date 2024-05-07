// Airport security officials have confiscated several item of the passengers at the security check point. All the items have been dumped into a huge box (array). Each item possesses a certain amount of risk[0,1,2]. Here, the risk severity of the items represent an array[] of N number of integer values. The task here is to sort the items based on their levels of risk in the array. The risk values range from 0 to 2.

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr;
    int a;
    while(cin>>a){
        arr.push_back(a);
    }

    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    
}
return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     int a[n];
//     for(int i=0;i< n;i++) cin>>a[i];
//     int l=0,m=0,h=n-1;
//     while(m<=h)
//     {
//         if(a[m]==0) swap(a[l++],a[m++]);
//         else if(a[m]==1) m++;
//         else swap(a[m],a[h--]);
//     }
//     for(int i=0;i< n;i++) cout<< a[i]<<" ";
// }