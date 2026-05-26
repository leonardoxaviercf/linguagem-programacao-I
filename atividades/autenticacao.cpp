#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Autenticacao {
public:
    virtual void autenticar() = 0;
};

class LoginSenha : public Autenticacao {
    void autenticar() {
        string login;
        string senha;

        cout << "Digite seu login: ";
        cin >> login;

        cout << "Digite sua senha: ";
        cin >> senha;

        if (login.length() > 4 || senha.length() > 8) {
            cout << "Login realizado com sucesso!";
        } else {
            cout << "Informações erradas! Verifique as informarções e tente login novamente.";
        }
    }
};

class GoogleAuth : public Autenticacao {
    void autenticar() {
        string email;
        vector<string> email_separado;

        cout << "Digite seu email: ";
        cin >> email;

        if (email_separado.back() == "gmail.com") {
            cout << "Autenticado com sucesso" << endl;
        } else {
            cout << "Verifique seu email" << endl;
        }
    }

    vector<string> getWords(string s) {
        vector<string> res;
        int pos = 0;
        while (pos < s.size()) {
            pos = s.find("@");
            res.push_back(s.substr(0, pos));
            s.erase(0, pos+1);
        }
        return res;
    }
};

int main() {
    Autenticacao* ls = new LoginSenha;
    ls->autenticar();

    return 0;
}