#include<iostream>
using namespace std;

void spiralmatrix(int mat[][4], int n, int m) {
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    cout << "spiral matrix is = ";
    while (srow <= erow && scol <= ecol) {
        // Top row
        for (int i = scol; i <= ecol; i++) {
            cout << mat[srow][i] << " ";
        }

        // Right column
        for (int i = srow + 1; i <= erow; i++) {
            cout << mat[i][ecol] << " ";
        }

        // Bottom row
        if (srow < erow) {
            for (int i = ecol - 1; i >= scol; i--) {
                cout << mat[erow][i] << " ";
            }
        }

        // Left column
        if (scol < ecol) {
            for (int i = erow - 1; i > srow; i--) {
                cout << mat[i][scol] << " ";
            }
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }

    cout << endl;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };

    spiralmatrix(matrix, 4, 4);

    int matrix2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };

    spiralmatrix(matrix2, 3, 4);

    return 0;
}
