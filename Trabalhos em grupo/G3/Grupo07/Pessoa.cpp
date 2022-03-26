#include "Pessoa.h"

namespace poo {
    Pessoa::Pessoa(std::string nome, std::string CPF) : nome(nome), CPF(CPF) {}
    Pessoa::~Pessoa() {}
    
    // retorna o nome
    std::string Pessoa::getNome() const {
        return nome;
    }
    
    // retorna o CPF
    std::string Pessoa::getCPF() const {
        return CPF;
    }
    
    // imprime o objeto do tipo Pessoa
    std::ostream& operator<<(std::ostream& saida, Pessoa& p) {
        saida << "Nome: " << p.getNome() << std::endl << "CPF: " << p.getCPF() << std::endl;

        return saida;
    }
}
