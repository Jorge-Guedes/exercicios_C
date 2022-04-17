/*
5. Altere o programa anterior permitindo ao usuário informar as populações e as taxas de
crescimento iniciais. Valide a entrada e permita repetir a operação.
*/

#include <iostream>
#include <ctype.h> // Biblioteca p/ tolower()
using namespace std;

int main() {

    bool continua = true;
    string opcao;
    float populacaoA, populacaoB, crescimentoA, crescimentoB;
    int anos;

    while (continua) {
        cout << "\nQuantidade populacao A: ";
        cin >> populacaoA;
        cout << "Quantidade populacao B: ";
        cin >> populacaoB;
        cout << "Taxa de crescimento da populacao A: ";
        cin >> crescimentoA;
        cout << "Taxa de crescimento da populacao B: ";
        cin >> crescimentoB;
        anos = 0;

        while (true) {
            anos++;
            populacaoA *= 1 + (crescimentoA/100);
            populacaoB *= 1 + (crescimentoB/100);
            if (populacaoA >= populacaoB) {
                cout << "\nDemorou " << anos << " ano(s) para a populacao de A passar ou igualar a de B." << endl;
                cout << "A tem " << populacaoA << " habitantes e B tem " << populacaoB << endl;
                break;
            }
        }
        cout << "\nDeseja continuar (s/n): ";
        cin >> opcao;
        opcao = tolower(opcao[0]);
        if (opcao != "s") {
            continua = false;
        }
    }
}

