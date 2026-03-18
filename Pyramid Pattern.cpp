#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = n - i - 1; j <= n - 1; j++) {
            arr[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}