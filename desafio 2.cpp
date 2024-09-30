#include"bits/stdc++.h"

using namespace std;

//2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
//(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número
// ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

void CalculatedFibonacci(vector<int>&Fibonacci, unordered_map<int, bool>& FibonacciTable, int target){//O(log target)
    while(Fibonacci[Fibonacci.size()-1] < target){
        int fibo = Fibonacci[Fibonacci.size()-1] + Fibonacci[Fibonacci.size()-2];
        Fibonacci.push_back(fibo);
        FibonacciTable[fibo] = true;
    }
    
}   
bool checkingIfNumberIsInFibonacciSequence(unordered_map<int, bool>& FibonacciTable, int num){
    return FibonacciTable.count(num) >= 1;
}
int main() {
    int target;
    vector<int> Fibonacci = {0, 1};
    unordered_map<int, bool> FibonacciTable;
    FibonacciTable[0] = true;
    FibonacciTable[1] = true;

    cin >> target;
    
    CalculatedFibonacci(Fibonacci, FibonacciTable, target);

    if(checkingIfNumberIsInFibonacciSequence(FibonacciTable, target)){
        cout << target << " number is in Fibonacci Sequence" << endl;
    } else {
        cout << target << " number is not in Fibonacci Sequence" << endl;
    }
    return 0;
}

// complexidade de tempo  O(log target)
// complexidade de memoria O(n)

    