
// 3. Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const int tamNotas = 4;
	float notas[tamNotas];
	float soma=0, media;

	for (int i=0; i<tamNotas; i++) {
		cout << "Digite a " << i+1 << " nota: ";
		cin >> notas[i];
		soma += notas[i];
	}

	media = soma / tamNotas;

	cout << "\nA media entre essas " << tamNotas << " foi de " << fixed << setprecision(1) << media << endl;

    return 0;
}
