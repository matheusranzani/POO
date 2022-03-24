#include "Professor.h"

// Exercício 3
namespace poo {
    Professor::Professor(std::string nome, std::string CPF, std::string universidade) : 
    Pessoa(nome, CPF), 
    universidade(universidade) {}
    
    Professor::~Professor() {}

    std::string Professor::getUniversidade() const {
        return this->universidade;
    }

    std::ostream& operator<<(std::ostream& saida, Professor& prof) {
        Pessoa p(prof.getNome(), prof.getCPF());
        operator<<(saida, p);

        saida << "Universidade: " << prof.getUniversidade() << std::endl;  

        return saida;
    }
}
