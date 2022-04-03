// 8. Faça um Programa que pergunte quanto você ganha por hora e o número de horas
// trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <iostream>
#include <iomanip> // import setprecision()
using namespace std;

int main() {
    float valor_hora, salario;
    int horas_trabalhadas;

    cout << "Valor ganho por hora: R$ ";
    cin >> valor_hora;
    cout << "Horas trabalhadas no mes: ";
    cin >> horas_trabalhadas;

    salario = valor_hora * horas_trabalhadas;
    cout << "\nO seu salario equivale a R$ " << fixed << setprecision(2) <<  salario << endl;

    return 0;
}
