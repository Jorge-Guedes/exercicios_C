/*
4. Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual
de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento
de 1.5%. Faça um programa que calcule e escreva o número de anos necessários para que a população
do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.
*/

#include <iostream>
using namespace std;

int main() {

    float populacaoA = 80000, populacaoB = 200000, crescimentoA, crescimentoB;
    int anos=0;

    crescimentoA = 3.0/100;
    crescimentoB = 1.5/100;

    while (true) {
        anos++;
        populacaoA *= 1 + (crescimentoA);
        populacaoB *= 1 + (crescimentoB);
        if (populacaoA >= populacaoB) {
            cout << "Demorou " << anos << " anos para a populacao de A passar ou igualar a de B." << endl;
            cout << "A tem " << populacaoA << " habitantes e B tem " << populacaoB << endl;
            break;
        }
    }

    return 0;
}
