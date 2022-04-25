/*
6. Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene
num vetor a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.
*/

#include <iostream>
using namespace std;

int main() {

    const int quantidadeNotas=4; const int tamAlunos=2;
    int tamAprovados=0, aprovados=0;
    float somaNotas;
    float vetorNotas[quantidadeNotas], vetorMedia[tamAlunos];

    for (int a=0; a<tamAlunos; a++) {
        cout << "\nALUNO " << a+1 << ":" << endl;
        cout << "------------------------------\n";
        for (int n=0; n<quantidadeNotas; n++) {
            cout << "Digite a " << n+1 << "� nota: ";
            cin >> vetorNotas[n];
            somaNotas += vetorNotas[n];
        }
        vetorMedia[a] = somaNotas / float(quantidadeNotas);
        somaNotas = 0;

        if (vetorMedia[a] >= 7) {
            aprovados++;
        }
    }

    cout << "------------------------------\n";


    for (int a=0; a<tamAlunos; a++) {
        cout << "Aluno" << a+1 << ": " << vetorMedia[a] << endl;
    }
    cout << "\nAo todo " << aprovados << " aluno(s) foram aprovados!" << endl;


    return 0;
}
