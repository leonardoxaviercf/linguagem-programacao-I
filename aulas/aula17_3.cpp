#include <iostream>
using namespace std;

// Relatório
// Cabeçalho - Nome e logo
// Conteúdo (gráfico, tabela, gestão)
// Rodapé (quem emitiu)

class Relatorio {
public:
    void imprimir() {
        cout << "Cabeçalho" << endl;
        conteudo();
        cout << "Rodapé" << endl;
    }

    virtual void conteudo() {
        throw new runtime_error("Não existe relatório genérico");
    }
};

class RelatorioRh : public Relatorio {
public:
    void conteudo() {
        cout << "Conteudo RH" << endl;
    }
};

int main() {
    Relatorio* r = new RelatorioRh;
    r->imprimir();

    return 0;
}