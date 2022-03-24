#include "Pessoa.h"

namespace poo {
    Pessoa::Pessoa(std::string nome, std::string CPF) : nome(nome), CPF(CPF) {}
    Pessoa::~Pessoa() {}

    std::string Pessoa::getNome() const {
        return nome;
    }

    std::string Pessoa::getCPF() const {
        return CPF;
    }

    std::ostream& operator<<(std::ostream& saida, Pessoa& p) {
        saida << "Nome: " << p.getNome() << std::endl << "CPF: " << p.getCPF() << std::endl;

        return saida;
    }
}
