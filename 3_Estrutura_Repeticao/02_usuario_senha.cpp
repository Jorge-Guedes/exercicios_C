/*
2. Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual
ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.
*/

#include <iostream>
#include <string.h>
#include <ctype.h> // import toupper()
using namespace std;

int main() {

    //string nome, senha;
    char nome[40], senha[40];

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite sua senha: ";
    cin >> senha;

    while (!strcmp(nome, senha)) {
        cout << "\nERRO! A sua senha deve ser diferente do nome!" << endl;
        cout << "Digite seu nome: ";
        cin >> nome;
        cout << "Digite sua senha: ";
        cin >> senha;
    }

    cout << "\nOlá " << nome << "! Sua conta foi cadastrada com sucesso!" << endl;

    return 0;
}
