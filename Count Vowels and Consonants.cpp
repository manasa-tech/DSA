#include <iostream>
using namespace std;

int main() {
    string str = "hello world";
    int vowels = 0, consonants = 0;

    for(char ch : str) {
        if(isalpha(ch)) {
            ch = tolower(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants;
}