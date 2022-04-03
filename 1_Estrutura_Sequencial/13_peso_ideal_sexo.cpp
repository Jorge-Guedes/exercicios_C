/*
13. Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo
que calcule seu peso ideal, utilizando as seguintes fórmulas:

	Para homens: (72.7*h) - 58
	Para mulheres: (62.1*h) - 44.7
*/

#include <iostream>
#include <iomanip> // Biblioteca para o setprecision
#include <ctype.h> // Biblioteca p/ toupper()
using namespace std;

int main() {
    string sexo;
    float altura, peso_ideal;
    cout << "Digite sua altura [m]: ";
    cin >> altura;
    cout << "\nDigite seu sexo: [M - Masculino | F - Feminino]: ";
    cin >> sexo;
    sexo = toupper(sexo[0]);

    if (sexo == "M") {
        peso_ideal = (72.7*altura) - 58;
        cout << "Voce eh homem" << endl;
    } else if (sexo == "F") {
        peso_ideal = (62.1*altura) - 44.7;
        cout << "Voce eh mulher" << endl;
    } else {
        cout << "Genero invalido!\n";
    }

    cout << "\nCom uma altura de " << altura << setprecision(2) << "m, seu peso ideal eh de " << peso_ideal << " Kg" << endl;

    return 0;
}
