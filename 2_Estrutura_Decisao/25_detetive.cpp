/*
25. Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:

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

    int numero_suspeitas = 0;
    const char* classificacao;
    string resposta;

    cout << "---- Investigacao criminal ----" << endl;

    cout << "\nTelefonou para a vitima? [s/n]: ";
    cin >> resposta;
    resposta = tolower(resposta[0]);
    if (resposta == "s") {
        numero_suspeitas++;
    }
    cout << "Esteve no local do crime? [s/n]: ";
    cin >> resposta;
    resposta = tolower(resposta[0]);
    if (resposta == "s") {
        numero_suspeitas++;
    }
    cout << "Mora perto da vitima? [s/n]: ";
    cin >> resposta;
    resposta = tolower(resposta[0]);
    if (resposta == "s") {
        numero_suspeitas++;
    }
    cout << "Devia para a vitima? [s/n]: ";
    cin >> resposta;
    resposta = tolower(resposta[0]);
    if (resposta == "s") {
        numero_suspeitas++;
    }
    cout << "Ja trabalhou com a vitima? [s/n]: ";
    cin >> resposta;
    resposta = tolower(resposta[0]);
    if (resposta == "s") {
        numero_suspeitas++;
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
