#include <iostream>
#include <windows.h>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    double altura;

    void apresentacao (string separador) {
        cout << nome << separador << idade << " | " << altura << endl;
    }



    // Construtor
    // Pessoa(string n, int i, double a) {
    //     nome = n;
    //     idade = i;
    //     altura = a;
    // }

    // Maneira para o construtor não confundir a parâmetro com a definição do struct
    Pessoa (string nome, int idade, double altura) {
        this->nome = nome;
        this->idade = idade;
        this->altura = altura;
    }

    // Para poder criar uma pessoa vazia, é necessário criar um construtor vazio também
    Pessoa () {

    }

    // Para poder criar uma pessoa faltando alguma informação, é necessário criar um construtor personalizado
    Pessoa (string n) {
        nome = n;
        idade = 0;
        altura = 0;
    }

    // Destrutor
    ~Pessoa() {
        cout << "Destruindo pessoa";
    }
};


int main () {
    SetConsoleCP(CP_UTF8);
    // Tipos de dados abstratos
    /*
    Estrutura de dados lineares
    Array (ou vetor) - Inserir elementos em qualquer lugar e ler os elementos de qualquer lugar
    Lista - Um elemento aponta para o outro
    Pilha (Stack) - Um elemento fica em cima do outro, só posso adicionar em cima e tirar de cima
    Fila (Queue) - O primeiro elemento que entra é o primeiro elemento que sai, onde a inserção é sempre no final
    */

    Pessoa p("Leonardo", 21, 1.67);

    p.apresentacao(" - ");
}