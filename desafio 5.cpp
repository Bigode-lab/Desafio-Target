// 5) Escreva um programa que inverta os caracteres de um string.

// IMPORTANTE:
// a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
// b) Evite usar funções prontas, como, por exemplo, reverse;

#include "bits/stdc++.h"

using namespace std;

string reverseString(string word){
    string wordReversed = "";
    for(int i = word.length() - 1; i >= 0; i--){
        wordReversed += word[i];
    }
    return wordReversed;
}

int main(){
    string word = "Target";
    cout << "Original string: " << word << endl;
    cout << "Reversed string: " << reverseString(word) << endl;
    return 0;
}