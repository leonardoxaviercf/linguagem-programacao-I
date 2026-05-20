#include <iostream>
#include <vector>
using namespace std;



class Pessoa {
public:
    string nome;
    string cpf;
    int idade;

    void exibirInformacoes(){
        cout << nome << " - " << cpf << " - " << idade << endl;
    }

    Pessoa operator+(Pessoa& p2) {
        Pessoa filho;
        filho.nome = this->nome + p2.nome;
        filho.idade = 0;
        filho.cpf = "-";
        return filho;

    }

    Pessoa operator+(int n) {
        this->idade += n;
        return *this;
    }

    Pessoa operator++(int) {
        this->idade += 1;
        return *this;
    }

    Pessoa operator--(int) {
        this->idade -= 1;
        return *this;
    }
};

int main() {
    Pessoa p;
    Pessoa p2;

    p.nome = "Paulo";
    p.idade = 30;

    p2.nome = "Ana";
    p2.idade = 21;

    p = p + 10;
    p.exibirInformacoes();

    p2++;
    p2.exibirInformacoes();

    p--;
    p.exibirInformacoes();
    
    Pessoa p3 = p + p2;

    p3.exibirInformacoes();


    

    return 0;
}