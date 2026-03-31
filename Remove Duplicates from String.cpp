#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string str = "programming";
    unordered_set<char> seen;
    string result = "";

    for(char ch : str) {
        if(seen.find(ch) == seen.end()) {
            result += ch;
            seen.insert(ch);
        }
    }

    cout << result;
}