#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str = "swiss";
    unordered_map<char, int> freq;

    for(char ch : str)
        freq[ch]++;

    for(char ch : str) {
        if(freq[ch] == 1) {
            cout << ch;
            break;
        }
    }
}