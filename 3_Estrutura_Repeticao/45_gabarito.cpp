/*
45. Desenvolver um programa para verificar a nota do aluno em uma prova com 10 questões, o programa
deve perguntar ao aluno a resposta de cada questão e ao final comparar com o gabarito da prova
e assim calcular o total de acertos e a nota (atribuir 1 ponto por resposta certa).
Após cada aluno utilizar o sistema deve ser feita uma pergunta se outro aluno vai utilizar o sistema.
Após todos os alunos terem respondido informar:

a) Maior e Menor Acerto;
b) Total de Alunos que utilizaram o sistema;
c) A Média das Notas da Turma.

Gabarito da Prova:

01 - A
02 - B
03 - C
04 - D
05 - E
06 - E
07 - D
08 - C
09 - B
10 - A

Após concluir isto você poderia incrementar o programa permitindo que o professor
digite o gabarito da prova antes dos alunos usarem o programa.
*/

#include <iostream>
#include <ctype.h> // import toupper()
#include <cmath> // import INFINITY
using namespace std;

int main() {

    int contador=0, alunos=0, numeroQuestoes=10, acertos=0, maiorNota, menorNota,
    idMaior, idMenor, nota, somaNotas=0;
    float media;
    char gabarito[numeroQuestoes], respostaAluno[numeroQuestoes];
    string opcao;

    maiorNota = -INFINITY;
    menorNota = INFINITY;

    cout << "Professor, dite o gabarito aqui embaixo:\n";
    cout << "Opcoes de gabarito (A, B, C, D, E)\n";
    for (int i=0; i<numeroQuestoes; i++) {
        cout << i+1 << "ª Questao: ";
        cin >> gabarito[i];
        gabarito[i] = toupper(gabarito[i]);
        while (gabarito[i] != 'A' && gabarito[i] != 'B' && gabarito[i] != 'C' && gabarito[i] != 'D' && gabarito[i] != 'E') {
            cout << "Opcao de gabarito invalida. (A, B, C, D ,E)" << endl;
            cout << i+1 << "ª Questao: ";
            cin >> gabarito[i];
            gabarito[i] = toupper(gabarito[i]);
        }
    }

    while (true) {
        system("clear"); // linux
        //system("cls"); // windows
        cout << "Aluno, a prova ja vai comecar... BOA SORTE!\n";
        cout << "Opcoes de gabarito (A, B, C, D, E)\n";
        alunos++;
        cout << "\nALUNO " << alunos << ":" << endl;
        cout << "-----------------------------\n";
        acertos = 0;
        for (int i=0; i<numeroQuestoes; i++) {
            cout << i+1 << "ª Questao: ";
            cin >> respostaAluno[i];
            respostaAluno[i] = toupper(respostaAluno[i]);
            while (respostaAluno[i] != 'A' && respostaAluno[i] != 'B' && respostaAluno[i] != 'C' && respostaAluno[i] != 'D' && respostaAluno[i] != 'E') {
                cout << "Opcao de gabarito invalida. (A, B, C, D ,E)" << endl;
                cout << i+1 << "ª Questao: ";
                cin >> respostaAluno[i];
                respostaAluno[i] = toupper(respostaAluno[i]);
            }

            if (respostaAluno[i] == gabarito[i]) {
                acertos++;
            }
        }
        nota = acertos;
        somaNotas += nota;
        cout << "A nota do " << alunos << "º aluno" << " foi " << nota << endl;
        if (nota > maiorNota) {
            maiorNota = nota;
            idMaior = alunos;
        }
        if (nota < menorNota) {
            menorNota = nota;
            idMenor = alunos;
        }
        cout << "Deseja continuar o sistema? (s/n) ";
        cin >> opcao;
        opcao = tolower(opcao[0]);
        while (opcao != "n" && opcao != "s") {
            cout << "Opcao invalida. Deseja continuar o sistema? (s/n) ";
            cin >> opcao;
            opcao = tolower(opcao[0]);
        }
        if (opcao == "n") {
            break;
        }
    }

    media = float(somaNotas / alunos);

    cout << "\n\nGabarito da Prova: " << endl;

    for (int i=0; i<10; i++) {
        contador++;
        (contador > 9) ? cout << contador : cout << "0" << contador;
        cout << " - " << gabarito[i] << endl;
    }

    cout << "\nAo todo " << alunos << " aluno(s) utilizaram o sistema!" << endl;
    cout << "Maior acerto foi do aluno " << idMaior << ", obtendo nota " << maiorNota << endl;
    cout << "Menor acerto foi do aluno " << idMenor << ", obtendo nota " << menorNota << endl;
    cout << "A media das notas foi de: " << media << endl;

    return 0;
}
