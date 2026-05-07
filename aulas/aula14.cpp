#include <iostream>
using namespace std;

class Pagamento {
public:
    virtual void pagar() {
        cout << "Processando Pagamento" << endl;
    }
};

class PagamentoPix : public Pagamento {
public:
    void pagar() override {
        cout << "Processando Pagamento Pix" << endl;
    }
};

class PagamentoCredito : public Pagamento {
public:
    void pagar() override {
        cout << "Processando Pagamento Crédito" << endl;
    }
};

class PagamentoDebito : public Pagamento {
public:
    void pagar() override {
        cout << "Processando Pagamento Débito" << endl;
    }
};

class SistemaFinanceiro {
public:
    Pagamento pagamento;
    void pagar(Pagamento* pagamento) {
        validarInformacoes();
        pagamento->pagar();
        notificar();
    }

    void notificar() {
        cout << "Pagamento realizado" << endl;
    }

    void validarInformacoes() {
        cout << "Validação realizada" << endl;
    }
};





// Erro de princípio de Liskov
class Ave {
public:
    virtual void locomove() {
        cout << "Ave está locomovendo" << endl;
    }
};

class AveVoa : public Ave {
public:
    virtual void voa() {
        cout << "Ave está voando" << endl;
    }
};

class Papagaio : public AveVoa {
public:
    void voa() override {
        cout << "Papagaio está voando" << endl;
    }
};

class Arara : public AveVoa {
public:
    void voa() override {
        cout << "Arara está voando" << endl;
    }
};

class Pinguim : public Ave {
public:
    void locomove() override {
        cout << "Pinguim está nadando" << endl;
    }
};



class Relatorio {
public:
    void cabecalho() {
        cout << "Cabecalho" << endl;
    }

    void rodape() {
        cout << "Rodape" << endl;
    }

    virtual void imprimir() {
        cabecalho();
        cout << "Relatório" << endl;
        rodape();
    }
};

class RelatorioFinanceiro :  public Relatorio {
public:
    void imprimir() override {
        cabecalho();
        cout << "Relatório Financeiro" << endl;
        rodape();
    }
};

class RelatorioRH :  public Relatorio {
public:
    void imprimir() override {
        cabecalho();
        cout << "Relatório RH" << endl;
        rodape();
    }
};

int main() {
    SistemaFinanceiro sf;
    sf.pagar(new PagamentoCredito);




    Ave* ave = new Ave;
    ave->locomove();

    Papagaio* papagaio = new Papagaio;
    papagaio->voa();

    Arara* arara = new Arara;
    arara->voa();

    Pinguim* pinguim = new Pinguim;
    pinguim->locomove();




    Relatorio* r = new Relatorio;
    r->imprimir();

    RelatorioFinanceiro* rf = new RelatorioFinanceiro;
    rf->imprimir();

    RelatorioRH* rh = new RelatorioRH;
    rf->imprimir();

    return 0;
}