#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[4][4];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            arr[i][j] = j + 1;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}