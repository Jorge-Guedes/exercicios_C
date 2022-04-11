/*
14. Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao
longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:

      Média de Aproveitamento  Conceito
      Entre 9.0 e 10.0        A
      Entre 7.5 e 9.0         B
      Entre 6.0 e 7.5         C
      Entre 4.0 e 6.0         D
      Entre 4.0 e zero        E

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO”
se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    float nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    media = (nota1 + nota2) / 2;

    cout << "\nSua media foi de " << fixed << setprecision(1) << media << endl;

    if (media >= 9) {
        cout << "Seu conceito eh [A]" << endl;
        cout << "Voce esta APROVADO(A)!" << endl;
    } else if (media >= 7.5) {
        cout << "Seu conceito eh [B]" << endl;
        cout << "Voce esta APROVADO(A)!" << endl;
    } else if (media >= 6) {
        cout << "Seu conceito eh [C]" << endl;
        cout << "Voce esta APROVADO(A)!" << endl;
    } else if (media >= 4) {
        cout << "Seu conceito eh [D]" << endl;
        cout << "Voce esta REPROVADO(A)!" << endl;
    } else {
        cout << "Seu conceito eh [E]" << endl;
        cout << "Voce esta REPROVADO(A)!" << endl;
    }

    return 0;
}
