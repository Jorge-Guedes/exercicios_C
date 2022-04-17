/*
40. Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes
de trânsito. Foram obtidos os seguintes dados:

    a) Código da cidade;
    b) Número de veículos de passeio (em 1999);
    c) Número de acidentes de trânsito com vítimas (em 1999). Deseja-se saber:
    d) Qual o maior e menor índice de acidentes de transito e a que cidade pertence;
    e) Qual a média de veículos nas cinco cidades juntas;
    f) Qual a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.
*/

#include <iostream>
#include <cmath> // import INFINITY
#include <ctype.h> // import tolower()
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    string opcao;
	int codigo=0, somaVeiculos=0, somaAcidentes=0;
	float indiceAcidente, maiorIndice, menorIndice, media, mediaVeiculos, mediaAcidentes,
    veiculos=0, acidentes=0;

	maiorIndice = -INFINITY;
	menorIndice = INFINITY;

	while(true) {
	    codigo++;
	    cout << "\n--------------" << codigo << "ª CIDADE -------------- " << endl;
		cout << "Numero de veiculos: ";
		cin >> veiculos;
		cout << "Numero de acidentes: ";
		cin >> acidentes;
		while (acidentes > veiculos) {
            cout << "\nERRO. Numero de acidentes nao pode ser maior que de veiculos!" << endl;
            cout << "Numero de acidentes:";
            cin >> acidentes;
		}

		indiceAcidente = float((acidentes / veiculos)) * 100;

		if (indiceAcidente > maiorIndice) {
			maiorIndice = indiceAcidente;
		}
		if (indiceAcidente < menorIndice) {
			menorIndice = indiceAcidente;
		}
		somaVeiculos += veiculos;
		somaAcidentes += acidentes;

        cout << "Deseja continuar? (s/n) ";
		cin >> opcao;
		opcao = tolower(opcao[0]);

		while (opcao != "s" && opcao != "n") {
            cout << "Opcao invalida. Tente novamente (s/n): ";
            cin >> opcao;
            opcao = tolower(opcao[0]);
		}
		if (opcao == "n") {
            break;
		}
	}

	mediaAcidentes = somaAcidentes / codigo;
	mediaVeiculos = somaVeiculos / codigo;


	cout << "\nO maior indice de acidente foi " << fixed << setprecision(1) << maiorIndice << "%" << endl;
	cout << "O menor indice de acidente foi " << fixed << setprecision(1) << menorIndice << "%" << endl;
	cout << "A media de veiculos da cidade foi " << mediaVeiculos << endl;
	cout << "A media de acidentes da cidade foi " << mediaAcidentes << endl;

    return 0;
}
