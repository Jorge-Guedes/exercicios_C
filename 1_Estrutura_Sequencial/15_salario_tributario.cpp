/*
15. Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.
Calcule e mostre o total do seu sal�rio no referido m�s, sabendo-se que s�o
descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato,
fa�a um programa que nos d�:

a) sal�rio bruto.
b) quanto pagou ao INSS.
c) quanto pagou ao sindicato.
d) o sal�rio l�quido.
e) calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo

	+ Sal�rio Bruto : R$
	- IR (11%) : R$
	- INSS (8%) : R$
	- Sindicato ( 5%) : R$
	= Sal�rio Liquido : R$
Obs.: Sal�rio Bruto - Descontos = Sal�rio L�quido.
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
