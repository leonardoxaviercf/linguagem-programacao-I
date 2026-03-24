#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string nome;
    int quantidade;
    double valorUnitario;

    Item (string nome, int quantidade, double valorUnitario) {
        this->nome = nome;
        this->quantidade = quantidade,
        this-> valorUnitario = valorUnitario;
    }
};

int main () {
    vector<Item> pedido;

    string nome;
    int quantidade;
    double valorUnitario;

    while (true) {
        int opc;
        cout << "[1] - Digitar pedido | [2] - Encerrar pedido" << endl;
        cin >> opc;

        if (opc == 1) {
            cout << "Nome do produto: ";
            cin >> nome;
            cout << "Quantidade: ";
            cin >> quantidade;;
            cout << "Valor unitário: R$";
            cin >> valorUnitario;

            pedido.push_back(Item(nome, quantidade, valorUnitario));
        } else {
            break;
        }
    }

    double total;

    return 0;
}