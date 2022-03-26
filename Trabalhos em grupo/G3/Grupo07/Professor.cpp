#include "Professor.h"

namespace poo {
    // construtor
    Professor::Professor(std::string nome, std::string CPF, std::string universidade) : 
    Pessoa(nome, CPF), 
    universidade(universidade) {}

    // construtor
    Professor::~Professor() {}

    // retorna a universidade
    std::string Professor::getUniversidade() const {
        return this->universidade;
    }
    // imprime o objeto do tipo Professor
    std::ostream& operator<<(std::ostream& saida, Professor& prof) {
        Pessoa p(prof.getNome(), prof.getCPF());
        operator<<(saida, p);

        saida << "Universidade: " << prof.getUniversidade() << std::endl;  

        return saida;
    }
}