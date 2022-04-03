/*
15. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são
descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato,
faça um programa que nos dê:

a) salário bruto.
b) quanto pagou ao INSS.
c) quanto pagou ao sindicato.
d) o salário líquido.
e) calcule os descontos e o salário líquido, conforme a tabela abaixo

	+ Salário Bruto : R$
	- IR (11%) : R$
	- INSS (8%) : R$
	- Sindicato ( 5%) : R$
	= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.
*/

#include <iostream>
using namespace std;

int main() {

    float valorHora, salarioBruto, salarioLiquido,
    impostoRenda, inss, sindicato, desconto;
    int horas;
    cout << "Valor ganho por hora: ";
    cin >> valorHora;
    cout << "Numero de horas trabalhadas no mes ";
    cin >> horas;
    salarioBruto = valorHora * horas;
    impostoRenda = 0.11 * salarioBruto;
    inss = 0.08 * salarioBruto;
    sindicato = 0.05 * salarioBruto;
    desconto = impostoRenda + inss + sindicato;
    salarioLiquido = salarioBruto - desconto;
    cout << "\nSalario bruto: R$" << salarioBruto;
    cout << "\nINSS: R$" << inss;
    cout << "\nSindicato: R$" << sindicato;
    cout << "\nO desconto foi de R$" << desconto << ", seu salario liquido eh de R$" << salarioLiquido << endl;
    return 0;
}
