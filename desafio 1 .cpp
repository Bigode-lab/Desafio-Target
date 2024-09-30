#include"bits/stdc++.h"
using namespace std;

// 1) Observe o trecho de código abaixo:
// int INDICE = 13, SOMA = 0, K = 0;
// Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
// Imprimir(SOMA);
// Ao final do processamento, qual será o valor da variável SOMA ?
// Ao final do processamento o valor da variável SOMA e 91

int main() {
    int INDICE = 13, SOMA = 0, K = 0;
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }
    cout << "SOMA: " << SOMA << endl;
    return 0;
}


