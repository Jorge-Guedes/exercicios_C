/*
25. Faça um programa que peça para n pessoas a sua idade, ao final o programa devera verificar
se a média de idade da turma varia entre 0 e 25 ,26 e 60 e maior que 60; e então, dizer
se a turma é jovem, adulta ou idosa, conforme a média calculada.

    Jovem - 0 a 25
    Adulta - 26 a 60
    Idosa - 60+
*/

#include <iostream>
using namespace std;

int main() {

    string opcao;
    const char* classificacao;
    int idade, somaIdade=0, mediaIdade, contador=0;

    while (true) {
        cout << "--------------------------" << endl;
        cout << "Idade: ";
        cin >> idade;
        while (idade < 0 || idade > 150 || isdigit(idade) != 0) {
            cout << "Idade invalida. Tente novamente: ";
            cin >> idade;
        }
        somaIdade += idade;
        contador += 1;
        mediaIdade = somaIdade / contador;
        cout << "Deseja continuar (s/n)? ";
        cin >> opcao;
        opcao = tolower(opcao[0]);
        if (opcao == "n") {
            break;
        }
        while (opcao != "n" && opcao != "s") {
            cout << "Opcao invalida. Deseja continuar (s/n)? ";
            cin >> opcao;
            opcao = tolower(opcao[0]);
        }

    }

    if (mediaIdade >= 0 && mediaIdade < 25) {
        classificacao = "Jovem";
    } else if (mediaIdade > 26 && mediaIdade < 60) {
        classificacao = "Adulta";
    } else if (mediaIdade > 60) {
        classificacao = "Idosa";
    }

    cout << "\nForam registradas " << contador << " idades." << endl;
    cout << "A media de idade eh " << mediaIdade << " e sua classificacao eh: " << classificacao << endl;

    return 0;
}
