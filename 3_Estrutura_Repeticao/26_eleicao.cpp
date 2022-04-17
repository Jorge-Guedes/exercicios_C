/*
26. Numa eleição existem três candidatos.
Faça um programa que peça o número total de eleitores.
Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.
*/

#include <iostream>
#include <ctype.h> // Biblioteca p/ toupper()
using namespace std;

int main() {

    string voto;
    int eleitores, candidatoA=0, candidatoB=0, candidatoC=0;

    cout << "------------------ ELEICAO 2022 ------------------" << endl;
    cout << "Candidato A" << endl;
    cout << "Candidato B" << endl;
    cout << "Candidato C" << endl;

    cout << "\nNumero de eleitores: ";
    cin >> eleitores;

    for (int i=0; i < eleitores; i++) {
        cout << "Deseja votar em qual candidato (A, B, C)? ";
        cin >> voto;
        voto = toupper(voto[0]);

        while (voto != "A" && voto != "B" && voto != "C") {
            cout << "Voto invalido. Deseja votar em qual candidato (A, B, C)? ";
            cin >> voto;
            voto = toupper(voto[0]);
        }
        if (voto == "A") {
            candidatoA += 1;
        } else if (voto == "B") {
            candidatoB += 1;
        } else if (voto == "C") {
            candidatoC += 1;
        }
    }

    cout << "\nTotal de votos: " << endl;
    cout << "Candidato A: " << candidatoA << endl;
    cout << "Candidato B: " << candidatoB << endl;
    cout << "Candidato C: " << candidatoC << endl;

    return 0;
}
