/*
3. Faça um programa que leia e valide as seguintes informações:
    a) Nome: maior que 3 caracteres;
    b) Idade: entre 0 e 150;
    c) Salário: maior que zero;
    d) Sexo: 'f' ou 'm';
    e) Estado Civil: 's', 'c', 'v', 'd';
*/

#include <iostream>
#include <ctype.h> // import toupper()
using namespace std;

int main() {

    int idade;
    string nome, sexo, estado;
    float salario;

    cout << "Nome: ";
    cin >> nome;
    while (nome.length() <= 3) {
        cout << "Nome invalido. Tente novamente: ";
        cin >> nome;
    }

    cout << "Idade: ";
    cin >> idade;
    while (idade < 0 || idade > 150) {
        cout << "Idade invalida. Tente novamente: ";
        cin >> idade;
    }

    cout << "Salário: ";
    cin >> salario;
    while (salario <= 0) {
        cout << "Salario invalido. Tente novamente: ";
        cin >> salario;
    }

    cout << "Sexo (F - Feminino. M - Masculino): ";
    cin >> sexo;
    sexo = toupper(sexo[0]);
    while (sexo != "F" && sexo != "M") {
        cout << "Sexo invalido. Tente novamente: ";
        cin >> sexo;
        sexo = toupper(sexo[0]);
    }

    cout << "Estado Civil (S - Solteiro, C - Casado, v - Viuvo, D - Divorciado): ";
    cin >> estado;
    estado = toupper(estado[0]);
    while (estado != "S" && estado != "C" && estado != "V" && estado != "D") {
        cout << "Estado invalido. Tente novamente: ";
        cin >> estado;
        estado = toupper(estado[0]);
    }

    cout << "\nValidado com sucesso!" << endl;

    return 0;
}
