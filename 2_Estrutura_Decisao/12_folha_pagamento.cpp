/*
12. Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos
são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 3% para
o Sindicato e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado
(é a empresa que deposita). O Salário Líquido corresponde ao Salário Bruto menos os descontos.
O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

    Desconto do IR:

    a) Salário Bruto até 900 (inclusive) - isento
    b) Salário Bruto até 1500 (inclusive) - desconto de 5%
    c) Salário Bruto até 2500 (inclusive) - desconto de 10%
    d) Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo.
No exemplo o valor da hora é 5 e a quantidade de hora é 220.

        Salário Bruto: (5 * 220)        : R$ 1100,00
        (-) IR (5%)                     : R$   55,00
        (-) INSS ( 10%)                 : R$  110,00
        FGTS (11%)                      : R$  121,00
        Total de descontos              : R$  165,00
        Salário Liquido                 : R$  935,00
*/


#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {

    int horas_trabalhadas;
    float valor_hora, salario_bruto, salario_liquido, valor_IR, valor_INSS, valor_FGTS, total_descontos;
    float desconto_IR, desconto_INSS=10, desconto_FGTS=11;

    cout << "Valor hora: R$";
    cin >> valor_hora;
    cout << "Horas trabalhadas: ";
    cin >> horas_trabalhadas;

    salario_bruto = horas_trabalhadas * valor_hora;

    if (salario_bruto < 900) {
        desconto_IR = 1;
    } else if (salario_bruto < 1500) {
        desconto_IR = 5;
    } else if (salario_bruto < 2500) {
        desconto_IR = 10;
    } else if (salario_bruto > 2500) {
        desconto_IR = 20;
    }

    valor_IR = salario_bruto * (desconto_IR/100);
    valor_INSS = salario_bruto * (desconto_INSS/100);
    valor_FGTS = salario_bruto * (desconto_FGTS/100);

    total_descontos = valor_IR + valor_INSS;
    salario_liquido = salario_bruto - total_descontos;

    cout << "\nSalario Bruto\t\t: R$ " << fixed << setprecision(2) << salario_bruto << endl;
    cout << "(-) IR (" << setprecision(0) << desconto_IR << "%" << ")" << "\t\t: R$ " << setprecision(2) << valor_IR << endl;
    cout << "(-) INSS (" << setprecision(0) << desconto_INSS << "%" << ")" << "\t\t: R$ " << setprecision(2) << valor_INSS << endl;
    cout << "FGTS (" << setprecision(0) << desconto_FGTS << "%" << ")" << "\t\t: R$ " << setprecision(2) << valor_FGTS << endl;
    cout << "Total de descontos\t: R$ " << setprecision(2) << total_descontos << endl;
    cout << "Salario Liquido\t\t: R$ " << setprecision(2) << salario_liquido << endl;

    return 0;
}
