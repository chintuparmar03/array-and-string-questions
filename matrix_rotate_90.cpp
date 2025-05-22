#include <bits/stdc++.h>
using namespace std;

int main() {
    const int n = 3;  
    vector<vector<int>> matrix(n, vector<int>(n)); // Initialize with proper size
    
    cout << "Enter the elements of 3x3 matrix:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Row " << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
           swap(matrix[i][j],matrix[j][i]);
        }
    }
  
    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    
    cout << "\nRotated matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}