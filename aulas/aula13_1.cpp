#include <iostream>
using namespace std;

class Animal {
public:
    virtual void emitirSom() {
        cout << "Emitiu som" << endl;
    }

    virtual ~Animal() {}
};

class Gato : public Animal {
public:
    void emitirSom() override {
        cout << "Miou" << endl;
    }
};

class Cachorro : public Animal {
public:
    void emitirSom() override {
        cout << "Latiu" << endl;
    }
};

void aplicarVacina(Animal* a) {
    cout << "Aplicando vacina" << endl;
    a->emitirSom();
}

int main() {
    Animal* a = new Animal();
    Animal* g = new Gato();
    Animal* c = new Cachorro();

    aplicarVacina(a);
    aplicarVacina(g);
    aplicarVacina(c);
}