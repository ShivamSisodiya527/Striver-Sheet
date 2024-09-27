#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n, 0);
    vector<int> col(m, 0);

    // Mark the rows and columns that should be set to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Set the marked rows and columns to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    cout << "Original Matrix:\n";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    setZeroes(matrix);

    cout << "\nMatrix after setting zeroes:\n";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
