/*
11. As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores
e lhe contraram para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte
critério, baseado no salário atual:

    a) salários até R$ 280,00 (incluindo) : aumento de 20%
    b) salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
    c) salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
    d) salários de R$ 1500,00 em diante : aumento de 5%.

    e) Após o aumento ser realizado, informe na tela:
        - o salário antes do reajuste;
        - o percentual de aumento aplicado;
        - o valor do aumento;
        - o novo salário, após o aumento.
*/

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    float salario_colaborador=0, aumento, valor_aumento, reajuste_salarial;

    cout << "Digite o salario do colaborador: R$";
    cin >> salario_colaborador;

    if (salario_colaborador < 280) {
        aumento = 20;
        valor_aumento = salario_colaborador * (aumento/100);
        reajuste_salarial = salario_colaborador + valor_aumento;
    } else if (salario_colaborador >= 280 && salario_colaborador < 700) {
        aumento = 15;
        valor_aumento = salario_colaborador * (aumento/100);
        reajuste_salarial = salario_colaborador + valor_aumento;
    } else if (salario_colaborador >= 700 && salario_colaborador < 1500) {
        aumento = 10;
        valor_aumento = salario_colaborador * (aumento/100);
        reajuste_salarial = salario_colaborador + valor_aumento;
    } else if (salario_colaborador >= 1500) {
        aumento = 5;
        valor_aumento = salario_colaborador * (aumento/100);
        reajuste_salarial = salario_colaborador + valor_aumento;
    }

    //cout.precision(3); // para 2 casas decimais

    cout << "\nSalario antes do reajuste: R$" << fixed << setprecision(2) << salario_colaborador << endl;
    cout << "Percentual de aumento aplicado: " << setprecision(0) << aumento << "%" << endl;
    cout << "Valor do aumento: R$" << setprecision(2) << valor_aumento << endl;
    cout << "Novo salario: R$" << setprecision(2) << reajuste_salarial << endl;

    //cout.precision(-1); // voltar precisao ao normal

    return 0;
}
