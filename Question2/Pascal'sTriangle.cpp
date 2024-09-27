#include<iostream>
#include<vector>
using namespace std;

vector<int> generateRow(int row) {
    vector<int> ans;
    long long sum = 1;  // Initialize sum to 1 for the first element of the row
    ans.push_back(1);   // First element is always 1

    for (int i = 1; i <= row; i++) {
        sum = sum * (row - i + 1) / i;  // Calculate the next element in the row
        ans.push_back(sum);
    }
    return ans;
}

vector<vector<int>> pascal(int col) {
    vector<vector<int>> solve;
    for (int i = 0; i < col; i++) {
        solve.push_back(generateRow(i));
    }
    return solve;
}

int main() {
    int numRows = 5;
    vector<vector<int>> result = pascal(numRows);

    // Display Pascal's Triangle
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
