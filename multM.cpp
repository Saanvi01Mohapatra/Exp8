//Name: Saanvi Mohapatra
//Prn: 23070123110
#include <iostream>
using namespace std;

int main() {
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 3;
    if (r1 != r2 || c1 != c2) {
        cout << "Error: Matrices must have the same dimensions for subtraction." << endl;
        return 1; 
    }

    int m1[r1][c1], m2[r2][c2], diff[r1][c1];

    cout << "Enter elements of the first matrix:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> m1[r][c];
        }
    }
    
    cout << "Enter elements of the second matrix:" << endl;
    for (int r = 0; r < r2; ++r) {
        for (int c = 0; c < c2; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> m2[r][c];
        }
    }
    
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            diff[r][c] = m1[r][c] - m2[r][c];
        }
    }

    cout << "Difference of matrices:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            cout << diff[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}