#include <iostream>
#include <vector>

using namespace std;

struct Funcionario {
    static int contador;

    string nome;
    double salario;
    int id;

    void imprimirFuncionario() {
        cout << this->nome << " - " << this->salario << " - " << this->id << endl;
    }

    Funcionario(string nome, double salario) {
        this->nome = nome;
        this->salario = salario;
        this->id = contador;

        contador++;
    }
    
};

int Funcionario::contador = 1;

int main() {
    Funcionario f1("Leonardo", 3200.49);
    Funcionario f2("Xavier", 2750.99);

    f1.imprimirFuncionario();
    f2.imprimirFuncionario();

    return 0;
}