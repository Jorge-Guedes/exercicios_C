// 24. Faça um programa que calcule o mostre a média aritmética de N notas.

#include <iostream>
#include <iomanip> // import setprecision()
#include <ctype.h> // Biblioteca p/ tolower()
using namespace std;

int main() {

    string opcao;
    float nota, soma=0, media, contador=0;

    while (true) {
        cout << "Digite uma nota: ";
        cin >> nota;
        if (nota == 0) {
            break;
        }
        soma += nota;
        contador += 1;
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

    media = soma / contador;

    cout << "\nA media entre essas " << contador << " notas eh de " << fixed << setprecision(1) << media << endl;

    return 0;
}
