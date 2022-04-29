#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>

class Hospital {
    private:
        // Atributos
        std::string nome;
        std::string sigla;

    public:
        // Construtor e Destrutor
        Hospital(std::string, std::string);
        ~Hospital();

        // Setters
        void setNome(std::string);
        void setSigla(std::string);

        // Getters
        std::string getNome() const;
        std::string getSigla() const;

        // Impressão
        void imprime() const;
};

#endif
