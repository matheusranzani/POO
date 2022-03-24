#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

// Exercício 1
namespace poo {
    class Pessoa {
        private:
            std::string nome;
            std::string CPF;
        public:
            Pessoa(std::string, std::string);
            ~Pessoa();

            std::string getNome() const;
            std::string getCPF() const;

            friend std::ostream& operator<<(std::ostream&, Pessoa&);
    };
}

#endif
