//Reverse an array
#include <iostream>
using namespace std;

void reversearr(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) { // Change '>' to '<'
        swap(arr[start], arr[end]); // Swap the elements in the array, not the indices
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {1, 5, 4, 6, 0}; // Added a fifth element to match the array size
    int size = 4; // Size should be the number of elements you want to reverse
    reversearr(arr, size);
    
    // Print the reversed array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
