/*
17. Fa�a um Programa para uma loja de tintas. O programa dever� pedir
o tamanho em metros quadrados da �rea a ser pintada. Considere que
a cobertura da tinta � de 1 litro para cada 6 metros quadrados e que
a tinta � vendida em latas de 18 litros, que custam R$ 80,00 ou
em gal�es de 3,6 litros, que custam R$ 25,00.

Informe ao usu�rio as quantidades de tinta a serem compradas e os respectivos pre�os em 3 situa��es:

	a) comprar apenas latas de 18 litros;
	b) comprar apenas gal�es de 3,6 litros;
	c) misturar latas e gal�es, de forma que o desperd�cio de tinta seja menor.

Acrescente 10% de folga e sempre arredonde os valores para cima, isto �, considere latas cheias.
*/

#include <iostream>
#include <math.h> // importar ceil() e floor()
#include <iomanip> // importar setprecision()
using namespace std;

int main() {
    float metrosQuadrados, metrosQuadradosMaisDez, rendimentoLitro = 6.0,
    litrosLata = 18.0, precoLata = 80.0, rendimentoLata,
    litrosGalao = 3.6, precoGalao = 25.0, rendimentoGalao,
    precoSomenteLatas, precoSomenteGaloes, precoLatas,
    precoGaloes, precoLatasEGaloes;

    int somenteLatas, somenteGaloes, latas, galoes;

    rendimentoLata = rendimentoLitro * litrosLata;
    rendimentoGalao = rendimentoLitro * litrosGalao;


    cout << "Digite a Area em m� a ser pintada: ";
    cin >> metrosQuadrados;
    metrosQuadradosMaisDez = metrosQuadrados * 1.1;

    somenteLatas = ceil(metrosQuadrados / rendimentoLata);
    somenteGaloes = ceil(metrosQuadrados / rendimentoGalao);
    latas = floor(metrosQuadradosMaisDez / rendimentoLata);
    galoes = ceil(((int)metrosQuadradosMaisDez % (int)rendimentoLata) / rendimentoGalao);

    precoSomenteLatas = somenteLatas * precoLata;
    precoSomenteGaloes = somenteGaloes * precoGalao;
    precoLatas = latas * precoLata;
    precoGaloes = galoes * precoGalao;
    precoLatasEGaloes = precoLatas + precoGaloes;

    cout << "\nSomente Latas: " << somenteLatas << ", custando R$" << fixed << setprecision(2) << precoSomenteLatas << endl;
    cout << "Somente Galoes: " << somenteGaloes << ", custando R$" << setprecision(2) << precoSomenteGaloes << endl;
    cout << "Latas: " << latas << ", Galoes: " << galoes << " custando R$" << setprecision(2) << precoLatasEGaloes << endl;

    return 0;
}
