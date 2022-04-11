// 4. Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <iostream>
#include <ctype.h> // Biblioteca p/ toupper()
using namespace std;

int main() {

    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;

    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "A letra [" << letra << "] eh uma vogal!" << endl;
    } else {
        cout << "A letra [" << letra << "] eh uma consoante!" << endl;
    }

    return 0;
}
