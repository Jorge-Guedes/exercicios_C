/*
39. Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno
e o segundo representando a sua altura em centímetros. Encontre o aluno mais alto e o mais baixo.
Mostre o número do aluno mais alto e o número do aluno mais baixo, junto com suas alturas.
*/

#include <iostream>
#include <cmath> // import INFINITY
using namespace std;

int main() {

	int id=0, idAlto, idBaixo;
	float altura, maiorAltura, menorAltura;

	maiorAltura = -INFINITY;
	menorAltura = INFINITY;

	for (int i=0; i < 3; i++) {
		id++;
		cout << "Altura (m): ";
		cin >> altura;
		cout << "---------------" << endl;
		if (altura > maiorAltura) {
			maiorAltura = altura;
			idAlto = id;
		}
		if (altura < menorAltura) {
			menorAltura = altura;
			idBaixo = id;
		}
	}

	cout << "O aluno mais alto eh o de numero [" << idAlto << "], possuindo " << maiorAltura << "m" << endl;
	cout << "O aluno mais baixo eh o de numero [" << idBaixo << "], possuindo " << menorAltura << "m" << endl;

    return 0;
}
