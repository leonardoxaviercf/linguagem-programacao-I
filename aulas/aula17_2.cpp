#include <iostream>
using namespace std;

class Dispositivo {
public:
    string nome;

    virtual void ligar() = 0;
};

class DispositivoMovel : public Dispositivo {
public:
    virtual void carregar() = 0;
};

class Smartphone : public DispositivoMovel {    
public:
    void ligar() {
        cout << "Ligando Smartphone" << endl;
    }

    void carregar() {
        cout << "Carregando Smartphone" << endl;
    }
};

int main() {
    Smartphone iphone;
    iphone.nome = "Iphone X";
    iphone.ligar();
    iphone.carregar();

    return 0;
}