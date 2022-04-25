/*
14. Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime.
As perguntas são:

a) "Telefonou para a vítima?"
b) "Esteve no local do crime?"
c) "Mora perto da vítima?"
d) "Devia para a vítima?"
e) "Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.
Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita",
entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".
*/

#include <iostream>
#include <ctype.h> // import tolower()
using namespace std;

int main() {

    int numero_suspeitas=0;
    const int quantidadePerguntas=5;
    string respostas[5];
    string classificacao;
    char perguntas[5][30] = {"Telefonou para a vítima? ", "Esteve no local do crime? ", "Mora perto da vítima? ",
                             "Devia para a vítima? ", "Já trabalhou com a vítima? "};

    for (int i=0; i<quantidadePerguntas; i++) {
        cout << perguntas[i];
        cin >> respostas[i];
        respostas[i] = tolower(respostas[i][0]);
        if (respostas[i] == "s") {
            numero_suspeitas++;
        }
    }

    if (numero_suspeitas == 2) {
        classificacao = "Suspeito(a)";
    } else if (numero_suspeitas >= 3 && numero_suspeitas <= 4) {
        classificacao = "Cumplice";
    } else if (numero_suspeitas == 5) {
        classificacao = "Assassino(a)";
    } else {
        classificacao = "Inocente";
    }

    cout << "\nClassificacao: " << classificacao << endl;

    return 0;
}
