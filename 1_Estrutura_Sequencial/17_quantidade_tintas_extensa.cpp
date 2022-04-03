/*
17. Faça um Programa para uma loja de tintas. O programa deverá pedir
o tamanho em metros quadrados da área a ser pintada. Considere que
a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que
a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou
em galões de 3,6 litros, que custam R$ 25,00.

Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:

	a) comprar apenas latas de 18 litros;
	b) comprar apenas galões de 3,6 litros;
	c) misturar latas e galões, de forma que o desperdício de tinta seja menor.

Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, considere latas cheias.
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


    cout << "Digite a Area em m² a ser pintada: ";
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
