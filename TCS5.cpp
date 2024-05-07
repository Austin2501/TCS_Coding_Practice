#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    int digit = 1;

    for(auto i: str){
        digit = digit * (i - '0');
    }

    cout<<digit<<endl;
    
    return 0;
}












// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str;
//     getline(cin, str);

//     int digit = stoi(str, 0, 10);
//     int sum = 1;
//     while(digit>0){
//         int rem = digit%10;
//         sum = sum * rem;
//         digit = digit/10;
//     }
//     cout<<sum<<endl;
// }


