/*
24. Faça um programa que simule um lançamento de dados. Lance o dado 100 vezes e armazene
os resultados em um vetor. Depois, mostre quantas vezes cada valor foi conseguido.

    Dica: Use um vetor de contadores (1-6) e uma função para gerar numeros aleatórios,
    simulando os lançamentos dos dados.
*/

#include <iostream>
#include <cstdlib> // import rand()
#include <ctime> // import time()
using namespace std;

int main() {

    int lancamentos = 100;
    int resultado[lancamentos];
    unsigned seed = time(0);

    srand(seed);

    for (int i=0; i<lancamentos; i++) {
        cout << 1+rand()%100 << endl;
    }
    return 0;
}
