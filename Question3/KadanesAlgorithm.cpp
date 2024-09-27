#include<bits/stdc++.h>
using namespace std;

// Kadane's algorithm to find the maximum subarray sum
int kadanes(vector<int> nums, int n) {
    int sum = 0;
    int maxi = nums[0]; // Initialize with the first element

    for (int i = 0; i < n; i++) {
        sum += nums[i];  // Add the current element to the running sum
        maxi = max(sum, maxi);  // Update the maximum subarray sum
        if (sum < 0) {
            sum = 0;  // Reset sum if it's negative
        }
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = kadanes(nums, n);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
