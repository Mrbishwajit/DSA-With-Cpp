#include<iostream>
using namespace std;

bool binarysearch(int mat[][4], int n, int m, int key) {
    int low = 0, high = n * m - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / m;
        int col = mid % m;

        if (mat[row][col] == key) {
            cout << "Found at position: (" << row << ", " << col << ")" << endl;
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
    {41, 42, 43, 44},
    {45, 46, 47, 48},
    {49, 50, 51, 52}
    };

    int key = 51;

    binarysearch(matrix, 4, 4, key);
    return 0;
}
