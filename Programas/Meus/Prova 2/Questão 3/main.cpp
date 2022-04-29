#include "Aluno.h"
#include "Professor.h"

#define ALUNO 'A'
#define PROFESSOR 'P' 

#include <vector>

double porcentagemAlunos(std::vector<Usuario*> usuarios) {
    int numeroAlunos = 0;
    int numeroProfessores = 0;

    for (int i = 0; i < usuarios.size(); i++) {
        if (usuarios.at(i)->getTipo() == ALUNO) {
            numeroAlunos++;
        } else {
            numeroProfessores++;
        }
    }

    int totalUsuarios = numeroAlunos + numeroProfessores;
    double porcentagemAlunos = ((double) numeroAlunos / totalUsuarios) * 100; 

    return porcentagemAlunos;
}

double porcentagemProfessores(std::vector<Usuario*> usuarios) {
    int numeroClientes = 0;
    int numeroProfessores = 0;

    for (int i = 0; i < usuarios.size(); i++) {
        if (usuarios.at(i)->getTipo() == PROFESSOR) {
            numeroProfessores++;
        } else {
            numeroClientes++;
        }
    }

    int totalUsuarios = numeroClientes + numeroProfessores;
    double porcentagemFornecedor = ((double) numeroProfessores / totalUsuarios) * 100; 

    return porcentagemFornecedor;
}


void imprimeUsuarios(std::vector<Usuario*> usuarios) {
    for (int i = 0; i < usuarios.size(); i++) {
        usuarios[i]->imprime();
    }
}

int main() {
    int N;

    std::cin >> N;

    std::vector<Usuario*> usuarios;
    char tipo;
    std::string nome;
    std::string CPF;
    std::string informacao_extra;

    for (int i = 0; i < N; i++) {
        std::cin >> tipo >> nome >> CPF >> informacao_extra;

        if (tipo == ALUNO) {
            Usuario* a = new Aluno(nome, CPF, informacao_extra);
            usuarios.push_back(a);
        } else {
            Usuario* p = new Professor(nome, CPF, informacao_extra);
            usuarios.push_back(p);
        }
    }
    
    std::cout << std::endl;
    std::cout << porcentagemAlunos(usuarios) << "% sao alunos." << std::endl;
    std::cout << porcentagemProfessores(usuarios) << "% sao professores." << std::endl;
    imprimeUsuarios(usuarios);

    return 0;
}
