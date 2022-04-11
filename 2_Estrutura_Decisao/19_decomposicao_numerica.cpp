/*
19.Faça um Programa que leia um número inteiro menor que 1000 e
imprima a quantidade de centenas, dezenas e unidades do mesmo.
Observando os termos no plural a colocação do "e", da vírgula entre outros.
Exemplo:
   - 326 = 3 centenas, 2 dezenas e 6 unidades
   - 12 = 1 dezena e 2 unidades Testar com: 326, 300, 100, 320, 310, 305, 301, 101,
    311, 111, 25, 20, 10, 21, 11, 1, 7 e 16
*/

#include <iostream>
#include <cstring> // import strcpy e sprintf
using namespace std;

int main() {
    int numero, unidade, dezena, centena;
    char separador1[5], separador2[5], unidade_string[20],
    dezena_string[20], centena_string[20];

    cout << "Digite um inteiro menor que 1000: ";
    cin >> numero;

    unidade = numero % 10;
    dezena = (numero % 100) / 10;
    centena = numero / 100;
    strcpy(separador1, "");
    strcpy(separador2, "");

    if (centena > 0 && dezena > 0 && unidade > 0) {
        strcpy(separador1, " , ");
        strcpy(separador2, " e ");
    } else if (centena > 0 && dezena > 0) {
        strcpy(separador1, " e ");
        strcpy(separador2, "");
    } else if ((centena > 0 && unidade > 0) || (dezena > 0 && unidade > 0)) {
        strcpy(separador1, "");
        strcpy(separador2, " e ");
    }

    if (centena > 0) {
        if (centena == 1) {
            strcpy(centena_string, "1 centena");
        } else {
            sprintf(centena_string, "%i centenas", centena);
        }
    } else {
        strcpy(centena_string, "");
    }

    if (dezena > 0) {
        if (dezena == 1) {
            strcpy(dezena_string, "1 dezena");
        } else {
            sprintf(dezena_string, "%i dezenas", dezena);
        }
    } else {
        strcpy(dezena_string, "");
    }

    if (unidade > 0) {
        if (unidade == 1) {
            strcpy(unidade_string, "1 unidade");
        } else {
            sprintf(unidade_string, "%i unidades", unidade);
        }
    } else {
        strcpy(unidade_string, "");
    }

    cout << centena_string << separador1 << dezena_string << separador2 << unidade_string << endl;

}
