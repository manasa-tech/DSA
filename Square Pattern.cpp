#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[4][4];

    // Fill array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = 1;
        }
    }

    // Print pattern
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}