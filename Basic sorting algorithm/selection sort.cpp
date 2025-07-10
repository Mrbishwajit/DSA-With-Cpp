#include<iostream>
using namespace std;

// Function to print the array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to perform selection sort
void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int smallestidx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallestidx]) {
                smallestidx = j;
            }
        }
        swap(arr[i], arr[smallestidx]);
    }
    print(arr, n); // Corrected: added semicolon and called after sorting
}

int main() {
    int arr[6] = {5, 4, 1, 3, 2,5};
    selectionsort(arr, 6);

    return 0;
}
