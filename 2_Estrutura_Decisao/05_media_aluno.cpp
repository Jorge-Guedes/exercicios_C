/*
5. Faça um programa para a leitura de duas notas parciais de um aluno.
O programa deve calcular a média alcançada por aluno e apresentar:

    a) A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    b) A mensagem "Reprovado", se a média for menor do que sete;
    c) A mensagem "Aprovado com Distinção", se a média for igual a dez.
*/

#include <iostream>
using namespace std;

int main() {

    float nota1, nota2, soma, media;

    cout << "Digite a 1ª nota: ";
    cin >> nota1;
    cout << "Digite a 2ª nota: ";
    cin >> nota2;

    soma = nota1 + nota2;
    media = soma / 2;

    cout.precision(2); // para 1 casa decimal

    if (media == 10) {
        cout << "\nSua media foi de " << media << " e voce esta APROVADO COM DISTINCAO!" << endl;
    } else if (media >= 7) {
        cout << "\nSua media foi de " << media << " e voce esta APROVADO!" << endl;

    } else if (media < 7) {
        cout << "\nSua media foi de " << media << " e voce esta REPROVADO!" << endl;
    }

    cout.precision(-1); // volta a precisao ao normal

    return 0;
}
