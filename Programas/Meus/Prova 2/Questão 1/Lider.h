#ifndef LIDER_H
#define LIDER_H

#include "Enfermeiro.h"

class Lider : public Enfermeiro {
    private:
        // Atributos
        std::string setor;
        Hospital* hospital;

    public:
        // Construtor e Destrutor
        Lider(std::string, std::string, double, std::string, Hospital*);
        ~Lider();
        
        // Setter
        void setSetor(std::string);

        // Getters
        virtual double getSalario() const; // Redefinição de getSalario()
        std::string getSetor() const;
        
        // Impressão
        void imprime() const;
};

#endif
