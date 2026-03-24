#include <iostream>
using namespace std;

// Funções: Sobrecarga e argumentos padrões
void saudacao(string nome, string saudacao = "Ola") { 
    // esse = "Ola" é o valor padrao caso não envie a saudação e sempre colocar argumentos padrões no final
    cout << saudacao << ", " << nome << endl;
}

void imprimir(string info) {
    cout << "Imprimindo info: " << info << endl;
}

void imprimir(int info) {
    cout << "Imprimindo info: " << info << endl;
}

void imprimir(double info) {
    cout << "Imprimindo info: " << info << endl;
}

int main () {
    saudacao("Ola", "Aluno");
    saudacao("Ola", "Xavier");
    saudacao("Ola");

    //Para imprimir + de um tipo é necessário iniciar voids diferentes com tipos diferentes, porém não pode repetir double info em dois voids
    imprimir("ola");
    imprimir(21);
    imprimir(3.14);

    return 0;
}