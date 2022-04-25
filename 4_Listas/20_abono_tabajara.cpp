/*
20. As Organizações Tabajara resolveram dar um abono aos seus colaboradores em reconhecimento
ao bom resultado alcançado durante o ano que passou. Para isto contratou você para desenvolver
a aplicação que servirá como uma projeção de quanto será gasto com o pagamento deste abono.

Após reuniões envolvendo a diretoria executiva, a diretoria financeira e os representantes do
sindicato laboral, chegou-se a seguinte forma de cálculo:

    I) Cada funcionário receberá o equivalente a 20% do seu salário bruto de dezembro;

O piso do abono será de 100 reais, isto é, aqueles funcionários cujo salário for muito baixo,
recebem este valor mínimo. Neste momento, não se deve ter nenhuma preocupação com colaboradores
com menor tempo de casa, descontos, impostos ou outras particularidades. Seu programa deverá
permitir a digitação do salário de um número indefinido (desconhecido) de salários. Um valor de
salário igual a 0 (zero) encerra a digitação. Após a entrada de todos os dados o programa deverá
calcular o valor do abono concedido a cada colaborador, de acordo com a regra definida acima.
Ao final, o programa deverá apresentar:

    a) O salário de cada funcionário, juntamente com o valor do abono;
    b) O número total de funcionário processados;
    c) O valor total a ser gasto com o pagamento do abono;
    d) O número de funcionários que receberá o valor mínimo de 100 reais;
    e) O maior valor pago como abono;

A tela baixo é um exemplo de execução do programa, apenas para fins ilustrativos.
Os valores podem mudar a cada execução do programa.

    Projeção de Gastos com Abono
    =============================
    Salário: 1000
    Salário: 300
    Salário: 500
    Salário: 100
    Salário: 4500
    Salário: 0

    Salário     -   Abono
    R$ 1000.00      R$ 200.00
    R$ 300.00       R$ 100.00
    R$ 500.00       R$ 100.00
    R$ 100.00       R$ 100.00
    R$ 4500.00      R$ 900.00

    Foram processados 5 colaboradores.
    Total gasto com abonos: R$ 1400.00.
    Valor mínimo pago a 3 colaboradores
    Maior valor de abono pago: R$ 900.00

*/

#include <iostream>
#include <iomanip> // import setprecision()
#include <cmath> // import INFINITY
using namespace std;

int main() {

    int contador=0, pisoAbono=100, contadorValorMinimo=0;
    float salario[100], abono[100], somaAbono=0, maiorAbono;

    cout << "\nProjeção de Gastos com Abono" << endl;
    cout << "=============================" << endl;
    while (true) {
        cout << "Salario (0 para encerrar): ";
        cin >> salario[contador];
        if (salario[contador] == 0) {
            break;
        }
        if (salario[contador] <= 500) {
            abono[contador] = pisoAbono;
            ++contadorValorMinimo;
        } else {
            abono[contador] = salario[contador] * 0.2;
        }
        ++contador;
    }

    maiorAbono = -INFINITY;

    cout << "=============================" << endl;
    cout << "\nSalario \t- \tAbono" << endl;
    for (int i=0; i<contador; i++) {
        cout << "R$ " << fixed << setprecision(2) << salario[i] << "\t\t" << "R$ " << fixed << setprecision(2) << abono[i] << endl;
        somaAbono += abono[i];
        if (abono[i] > maiorAbono) {
            maiorAbono = abono[i];
        }
    }

    cout << "\n\nForam processados " << contador << " colaboradores" << endl;
    cout << "Total gasto com abonos: R$ " << fixed << setprecision(2) << somaAbono << endl;
    cout << "Valor minimo pago a " << contadorValorMinimo << " colaboradores" << endl;
    cout << "Maior valor de abono pago: R$ " << fixed << setprecision(2) << maiorAbono << endl;

    return 0;
}
