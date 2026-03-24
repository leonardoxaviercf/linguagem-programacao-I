#include <iostream>
#include<vector>
#include <list>
using namespace std;

struct ItemCarrinho {
    string nome;
    double valor;
    int qtd;
};

struct Carrinho {
    ItemCarrinho Item[100];
};





int main() {
    list<int> numeros = {1, 2, 3, 4, 5};

    cout << numeros.front() << endl;

    for (int n : numeros) {
        cout << n << endl;
    }
}