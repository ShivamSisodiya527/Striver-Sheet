#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> & nums){
    int idx1=-1;
    int idx2=0;
    for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx1=i;
            break;
        }
    }
    if(idx1<0){
     sort(nums.begin(),nums.end());
     return;
    }
    for(int i=nums.size()-1;i>idx1;i--){
        if(nums[idx1]<nums[i]){
            idx2=i;
        }
        swap(nums[idx1],nums[idx2]);
        sort(nums.begin()+idx1+1,nums.end());
    }
}
int main() {
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);

    // Output the next permutation
    for (int n : nums) {
        cout << n << " ";
    }

    return 0;
}