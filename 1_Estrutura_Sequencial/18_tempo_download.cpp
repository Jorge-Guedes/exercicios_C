/*
18. Faça um programa que peça o tamanho de um arquivo para download (em MB)
e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo
aproximado de download do arquivo usando este link (em minutos).
*/

#include <iostream>
using namespace std;

int main() {
    int segundos, segundos_final, minutos, horas;
    double tamanhoMB, velocidadeMbps;
    cout << "Tamanho do arquivo para donwload (em MB): ";
    cin >> tamanhoMB;
    cout << "Velocidade da internet: (em Mbps): ";
    cin >> velocidadeMbps;
    segundos = tamanhoMB / (velocidadeMbps / 8);
	horas = segundos / 3600;
	minutos = (segundos % 3600) / 60;
	segundos_final = (segundos % 3600) % 60;
	if (segundos > 60 && segundos < 3600) {
		cout << "\nO tempo eh de aproximadamente: " << minutos << " Minuto(s) " << segundos_final << " Seg(s).";
	} else if (segundos > 3600) {
		cout << "\nO tempo eh de aproximadamente: " << horas << " Hora(s) " << minutos << " Minuto(s) " << segundos_final << " Seg(s).";
	} else if (segundos < 60) {
		cout << "\nO tempo eh de aproximadamente: " << segundos_final << " segundos" << endl;
	}
	cout << "\n";

    return 0;
}
