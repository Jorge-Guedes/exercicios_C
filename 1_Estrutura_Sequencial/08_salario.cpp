// 8. Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas
// trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

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
