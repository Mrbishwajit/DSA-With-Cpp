#include<iostream>
using namespace std;

bool linearSearchMatrix(int mat[][4], int n, int m, int key) {
    for (int i = 0; i < n; i++) {          // loop through rows
        for (int j = 0; j < m; j++) {      // loop through columns
            if (mat[i][j] == key) {
                cout << "Found at position: (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    cout << "Not found." << endl;
    return false;
}
bool staircase(int mat[][4], int n, int m, int key) {
    int i = 0, j = m - 1;  // start from top-right

    while (i < n && j >= 0) {
        if (mat[i][j] == key) {
            cout<<"found at position for stair case ("<<i <<","<< j <<")";
            return true;
        } else if (mat[i][j] > key) {
            j--;  // move left
        } else {
            i++;  // move down
        }
    }
    return false;  // not found
}

bool binarysearch(int mat[][4], int n, int m, int key) {
    int low = 0, high = n * m - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / m;
        int col = mid % m;

        if (mat[row][col] == key) {
            cout << "Found at position for binary search: (" << row << ", " << col << ")" << endl;
            return true;
        } else if (mat[row][col] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Not found." << endl;
    return false;
}
int main() {
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int key = 33;
    linearSearchMatrix(matrix, 4, 4, key);
    staircase(matrix,4,4,key);
    cout<<endl;
    int matrix2[4][4] = {
           {10, 20, 30, 40},
    {41, 42, 43, 44},
    {45, 46, 47, 48},
    {49, 50, 51, 52}
    };

  
    binarysearch(matrix2,4,4,51);
    return 0;
}
