#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    static string especie;

    void imprimirPessoa() {
        cout << this->nome << " - " << this->idade << endl;
    };

    static void imprimirPessoaStatic() {
        cout << "Especie: " << especie << endl; 
    };

    Pessoa(string nome, int idade) {
        this->nome = nome;
        this->idade = idade;
    };
};

string Pessoa::especie;

struct Configuracao {
    const string nome;
    const string versao;
    const double pi = 3.14;

    Configuracao(string nome, string versao) : nome(nome), versao(versao) {
        cout << "Inicializando construtor: " << this->nome << " " << this->versao << endl;
    }
};

int main() {
    const vector<int> numeros = {1, 2, 3, 4, 5};
    // numeros.push_back(6); Dá erro pois agora o vetor é constante

    for (int n : numeros) {
        cout << n << endl;
    }

    Pessoa::especie = "Humano";

    Pessoa p1("Leonardo", 21);
    Pessoa p2("Xavier", 20);

    p1.imprimirPessoa();
    p2.imprimirPessoa();

    Pessoa::imprimirPessoaStatic();

    // Configuracao config("LP1 - 35T56", "1.0.0");
    // cout << config.nome << " " << config.versao << endl;

    return 0;
}