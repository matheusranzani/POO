#include "Pessoa.h"
#include <string>

// Exercício 1
namespace poo {
    Pessoa::Pessoa(std::string nome, std::string CPF) : nome(nome), CPF(CPF) {}
    Pessoa::~Pessoa() {}

    std::string Pessoa::getNome() const {
        return nome;
    }

    std::string Pessoa::getCPF() const {
        return CPF;
    }

    std::ostream& operator<<(std::ostream& saida, Pessoa p) {
        saida << "Nome: " << p.nome << std::endl
            << "CPF: "
            << p.CPF.substr(0, 3)
            << "." << p.CPF.substr(3, 3)
            << "." << p.CPF.substr(6, 3)
            << "-" << p.CPF.substr(9, 2)
        << std::endl;

        return saida;
    }
}
