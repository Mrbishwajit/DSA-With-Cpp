#include<iostream>
using namespace std;

void searchMatrix(int mat[][4], int n, int m, int key) {
    int st = 0;
    int end = (n * m) - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        int r = mid / m;
        int c = mid % m;

        if (mat[r][c] == key) {
            cout << "Element found at position: (" << r << ", " << c << ")" << endl;
            return;
        } else if (mat[r][c] < key) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "Element not found in the matrix." << endl;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    searchMatrix(matrix, 4, 4, key);

    return 0;
}
