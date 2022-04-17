/*
27. Faça um programa que calcule o número médio de alunos por turma.
Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma.
As turmas não podem ter mais de 40 alunos.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    int turmas, alunos, numeroAlunos=0, mediaAlunos;

    cout << "Quantidade de turmas: ";
    cin >> turmas;
    cout << "\n";

    for (int i=0; i < turmas; i++) {
        cout << "Quantidade de alunos: ";
        cin >> alunos;
        while (alunos < 0 || alunos > 40) {
            cout << "A quantidade de alunos deve estar entre 0 a 40." << endl;
            cout << "\nQuantidade de alunos: ";
            cin >> alunos;
        }
        numeroAlunos += alunos;
    }

    mediaAlunos = numeroAlunos / turmas;
    cout << "\nA media de alunos entre essas " << turmas << " turmas eh de " << mediaAlunos << endl;

    return 0;
}
