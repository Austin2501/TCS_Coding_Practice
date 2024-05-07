#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
    for(int i=1; i<nums.size();i++) {
        int temp = max(nums[i],max(prod1*nums[i],prod2*nums[i]));
        prod2 = min(nums[i],min(prod1*nums[i],prod2*nums[i]));
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
    return result;
}

int main() {
    
    vector<int> nums;
    int a;
    for(int i=0; i<6;i++){
        cin>>a;
        nums.push_back(a);
    }
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}


