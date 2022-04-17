/*
38. Um funcionario de uma empresa recebe aumento salarial anualmente: Sabe-se que:

    a) Esse funcionario foi contratado em 1995, com salario inicial de R$ 1.000,00;

    b) Em 1996 recebeu aumento de 1,5% sobre seu salario inicial;

    c) A partir de 1997 (inclusive), os aumentos salariais sempre correspondem ao dobro
    do percentual do ano anterior.

Faca um programa que determine o salario atual desse funcionario.
Apos concluir isto, altere o programa permitindo que o usuario digite o salario inicial do funcionario.
*/

#include <iostream>
using namespace std;

int main() {

	int anos;
	float salarioInicio=1000, salarioAtual, taxaInicial, taxaAumento;
	int anoInicial=1995, anoAtual=2022;

	cout << "Digite seu salario inicial: R$ ";
	cin >> salarioInicio;
	cout << "Digite o ano inicial em que voce entrou na empresa: ";
	cin >> anoInicial;
	cout << "Digite o ano atual ou que saiu da empresa: ";
	cin >> anoAtual;
    while (anoAtual < anoInicial) {
        cout << "\nAno atual invalido. Tente novamente: ";
        cin >> anoAtual;
    }

	salarioAtual = salarioInicio;

	for (int i=anoInicial; i<=anoAtual; i++) {
	    taxaAumento = taxaInicial;
        if (i == anoInicial+2) {
            taxaAumento = taxaInicial * 2;
        }
        salarioAtual = salarioInicio + (salarioInicio * taxaAumento);
        taxaInicial = 1.5/100;
        //cout << i << ": R$ " << salarioAtual << endl;
	}

    cout << "\nSalario Inicial (" << anoInicial << "): R$ " << salarioInicio << endl;
	cout << "Salario Atual (" << anoAtual << "): R$ " << salarioAtual << endl;

    return 0;
}
