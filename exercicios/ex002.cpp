#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

struct Aluno {
    int id;
    string nome;
    int idade;
    double nota1;
    double nota2;
    double nota3;

    Aluno (int id, string nome, int idade, double nota1, double nota2, double nota3) {
        this->id = id;
        this->nome = nome;
        this->idade = idade;
        this->nota1 = nota1;
        this->nota2 = nota2;
        this->nota3 = nota3;
    }
};

// Atividade incompleta
int main() {
    SetConsoleCP(CP_UTF8);
    vector <Aluno> vetor_aluno;

    int id;
    string nome;
    int idade;
    double nota1, nota2, nota3;

    while (true) {
        int opc;
        cout << "[1] - Cadastrar aluno | [2] - Exibir todos os alunos | [3] - Pesquisar aluno por ID | [4] - Média geral da turma | [0] - Encerrar" << endl;
        cin >> opc;

        if (opc == 1) {
            cout << "Digite o ID do aluno: ";
            cin >> id;
            cout << "Digite o nome do aluno: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Digite a idade do aluno: ";
            cin >> idade;
            cout << "Digite a nota 1: ";
            cin >> nota1;
            cout << "Digite a nota 2: ";
            cin >> nota2;
            cout << "Digite a nota 3: ";
            cin >> nota3;

            vetor_aluno.push_back(Aluno(id, nome, idade, nota1, nota2, nota3));

            cout << "Aluno cadastrado com sucesso!" << endl;

        } else if (opc == 2) {
            for (const auto& elemento : vetor_aluno) {
                cout << "ID: " << elemento.id
                    << " | Nome: " << elemento.nome
                    << " | Idade: " << elemento.idade
                    << " | Nota 1: " << elemento.nota1
                    << " | Nota 2: " << elemento.nota2
                    << " | Nota 3: " << elemento.nota3
                    << " | Média: " << (elemento.nota1 + elemento.nota2 + elemento.nota3) / 3   
                    << endl;
            }
        } else if (opc == 3) {
            int alunoId;
            int encontrarId = 0;
            cout << "Digite o ID do aluno: " << endl;
            cin >> alunoId;

            for (const auto& elemento : vetor_aluno) {
                if (alunoId == elemento.id) {
                    encontrarId += 1;
                }
            }

            if (encontrarId == 0) {
                cout << "Nenhum aluno com esse ID." << endl;
            } else if (encontrarId == 1) {
                for (const auto& elemento : vetor_aluno) {
                    if (alunoId == elemento.id) {
                        cout << "ID: " << elemento.id
                            << " | Nome: " << elemento.nome
                            << " | Idade: " << elemento.idade
                            << " | Nota 1: " << elemento.nota1
                            << " | Nota 2: " << elemento.nota2
                            << " | Nota 3: " << elemento.nota3
                            << " | Média: " << (elemento.nota1 + elemento.nota2 + elemento.nota3) / 3   
                            << endl;
                    }
                }
            } else {
                cout << "Erro: Temos mais de um aluno com esse ID." << endl;
            }
        } else if (opc == 4) {
            int contarAlunos = 0;
            float somarMedias = 0;

            for (const auto& elemento : vetor_aluno) {
                contarAlunos += 1;
                somarMedias += (elemento.nota1 + elemento.nota2 + elemento.nota3) / 3;
            }

            cout << "Média geral da turma: " << somarMedias / contarAlunos << endl;
        } else if (opc == 0) {
            break;
        } else {
            cout << "Digite uma opção válida!" << endl;
        }
    }

    cout << "Programa encerrado!" << endl;

    return 0;
}