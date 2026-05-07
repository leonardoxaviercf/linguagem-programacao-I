#include <iostream>
using namespace std;

class Relatorio {
public:
    void imprimir() {
        impressaoConteudo();
        registroImpressao();
    }

    virtual void impressaoConteudo() {
        cout << "Imprimindo relatório na tela" << endl;
    }

    virtual void registroImpressao() {
        cout << "Relatório impresso por: USUÁRIO" << endl;
    }
};

class RelatorioPdf : public Relatorio {
public:
    void impressaoConteudo() override {
        cout << "Imprimindo relatório PDF" << endl;
        registroImpressao();
    }
};

class RelatorioExcel : public Relatorio {
public:
    void impressaoConteudo() override {
        cout << "Imprimindo relatório Excel" << endl;
        registroImpressao();
    }
};

int main() {
    int opc = 0;
    Relatorio* r;

    if (opc == 0) {
        r = new Relatorio();
    } else if (opc == 1) {
        r = new RelatorioPdf();
    } else if (opc == 2) {
        r = new RelatorioExcel();
    }
}