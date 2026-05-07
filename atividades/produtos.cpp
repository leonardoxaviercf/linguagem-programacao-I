#include <iostream>
using namespace std;

class Produto {
public:
    string nome;
    double preco;

    virtual void imprimir() {
        cout << "Nome: " << nome << " | Preço: R$" << preco << endl;
    }

    Produto(string n, double p) : nome(n), preco(p) {
        cout << "Objeto criado." << endl;
    };
};

class ProdutoLimpeza : public Produto {
    enum tipoUso {
        domestico,
        hospitalar,
        industrial
    };

    void imprimir() {
        cout << "Nome: " << nome << " | Preço: R$" << preco << endl;
    }

    ProdutoLimpeza(string n, double p, enum t) : Produto(n, p), tipoUso(t) {
        cout << "Objeto criado." << endl;
    }
};

class ProdutoAlimenticio : public Produto {
    void imprimir() {
       cout << "Nome: " << nome << " | Preço: R$" << preco << endl; 
    }
};

int main() {
    Produto* p = new Produto("Monitor LG", 799.99);
    p->imprimir();

    return 0;
}