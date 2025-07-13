#include<iostream>
using namespace std;

int main() {
    int student[3][4];
    int n = 3, m = 4;

    // Input phase
    cout << "Enter marks for 3 students (each with 4 subjects):" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Student " << i+1 << ": ";
        for(int j = 0; j < m; j++) {
            cin >> student[i][j];
        }
    }

    // Output phase
    cout << "\nMarks Table:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Student " << i+1 << ": ";
        for(int j = 0; j < m; j++) {
            cout << student[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}

