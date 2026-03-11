#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float numero1;
    float numero2;
    int opcao;
   

    while (true) {
        cout << "Digite o primeiro número: ";
        cin >> numero1;
        cout << "Digite o segundo número: ";
        cin >> numero2;

        cout << "Qual operação deseja realizar? SOMA [1] - SUBTRAÇÃO [2] - MULTIPLICAÇÃO [3] - DIVISÃO [4] - ENCERRAR [0]: ";
        cin >> opcao;

        if (opcao == 0) {
            break;
        } else {
            switch (opcao) {
            case 1:
                cout << "A soma resulta em: " << numero1 + numero2 << endl;
                break;
            case 2:
                cout << "A subtração resulta em: " << numero1 - numero2 << endl;
                break;
            case 3:
                cout << "A multiplicação resulta em: " << numero1 * numero2 << endl;
                break;
            case 4:
                if (numero2 == 0) {
                    cout << "Não é possível dividir por 0";
                } else {
                    cout << "A divisão resulta em: " << numero1 / numero2 << endl;
                }
            default:
                cout << "Opção inválida";
                break;
            }
        }
    }
}