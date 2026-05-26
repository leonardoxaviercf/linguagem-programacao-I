#include <iostream>
using namespace std;

class Personagem {
public:
    string nome;

    virtual void atacar() = 0;
    
    virtual void apresentacao() {
        cout << "Nome: " << nome << endl;
    }
};

class Mago : public Personagem {
public:
    void atacar() {
        cout << "Atacando com magia" << endl;
    }
};

class Guerreiro : public Personagem {
public:
    void atacar() {
        cout << "Atacando com espada" << endl;
    }
};

class Arqueiro : public Personagem {
public:
    void atacar() {
        cout << "Atacando com arco e flecha" << endl;
    }
};

int main() {
    Mago m;
    m.nome = "Mago";
    m.apresentacao();
    m.atacar();

    Guerreiro g;
    g.nome = "Guerreiro";
    g.apresentacao();
    g.atacar();

    Arqueiro a;
    a.nome = "Arqueiro";
    a.apresentacao();
    a.atacar();

    return 0;
}