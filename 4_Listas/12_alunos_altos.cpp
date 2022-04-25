/*
12. Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos
alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const int tamanhoAlunos = 30;
    int idade[tamanhoAlunos], altura_inferior_media=0;
    float altura[tamanhoAlunos], somaAltura, mediaAltura;

    for (int i=0; i<tamanhoAlunos; i++) {
        cout << "\nAluno " << i+1 << endl;
        cout << "---------------------------\n";
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura (m): ";
        cin >> altura[i];
        somaAltura += altura[i];
    }
    mediaAltura = somaAltura / float(tamanhoAlunos);

    for (int i=0; i<tamanhoAlunos; i++) {
        if (idade[i] > 13 && altura[i] < mediaAltura) {
            altura_inferior_media++;
        }
    }

    cout << "\n\nAo todo " << altura_inferior_media << " aluno(s) com mais de 13 anos possuem altura inferior a media de " <<
    fixed << setprecision(2) << mediaAltura << " m" << endl;

    return 0;
}
