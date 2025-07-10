#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {  // fixed loop condition
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // fixed semicolon
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] <arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    print(arr, n);
}

int main() {
    int arr[6] = {4, 5, 9, 7, 3, 1};
    bubblesort(arr, 6);
    return 0;
}