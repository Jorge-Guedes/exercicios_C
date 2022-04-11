/*
20. Faça um Programa para leitura de três notas parciais de um aluno. O programa deve calcular
a média alcançada por aluno e presentar:

    a) A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
    b) A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
    c) A mensagem "Aprovado com Distinção", se a média for igual a 10.

*/
#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    float nota1, nota2, nota3, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 0 && media <= 10) {
        cout << "\nSua media foi de " << fixed << setprecision(1) << media << " e voce esta ";
    }

    if (media == 10) {
        cout << "Aprovado com Distinçao" << endl;
    } else if (media >= 7 && media < 10) {
         cout << "Aprovado" << endl;
    } else if (media < 7) {
        cout << "Reprovado" << endl;
    } else {
        cout << "Notas invalidas" << endl;
    }

    return 0;
}
