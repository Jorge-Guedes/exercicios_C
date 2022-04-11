// 18. Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.

#include <iostream>
#include <time.h> //Biblioteca com comandos de data e hora
using namespace std;

int main() {

    int dia, mes, ano;
    char barra1, barra2;

    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> dia >> barra1 >> mes >> barra2 >> ano;

    if (ano <= 0) {
        cout << "Ano invalido!" << endl;
    } else if (barra1 != '/' && barra2 != '/') {
        cout << "Formato invalido!" << endl;
    } else {
        if (mes < 1 || mes > 12) {
            cout << "Mes invalido!" << endl;
        } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7
                   || mes == 8 || mes == 10 || mes == 12) {
            // meses com 31 dias
            if (dia > 0 && dia < 32) {
                cout << "Data valida!" << endl;
            } else {
                cout << "Dia invalido!" << endl;
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            // meses com 30 dias
            if (dia > 0 && dia < 31) {
                cout << "Data valida!" << endl;
            } else {
                cout << "Dia invalido!" << endl;
            }
        } else  { // fevereiro
            if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) { // Ano bissexto
                if (dia > 0 && dia < 30) {
                    cout << "Data valida!" << endl;
                } else {
                    cout << "Dia invalido!" << endl;
                }
            } else { // Ano não bissexto
                if (dia > 0 && dia < 29) {
                    cout << "Data valida!" << endl;
                } else {
                    cout << "Data invalido!" << endl;
                }
            }
        }

    }

    return 0;
}
