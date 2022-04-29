#ifndef ENFERMEIRO_H
#define ENFERMEIRO_H

#include "Hospital.h"

class Enfermeiro {
    private:
        // Atributos
        std::string nome;
        std::string CPF;
        double salario;
        Hospital* hospital;
    
    public:
        // Construtor e Destrutor
        Enfermeiro(std::string, std::string, double, Hospital*);
        ~Enfermeiro();

        // Setters
        void setNome(std::string);
        void setCPF(std::string);
        void setSalario(double);

        // Getters
        std::string getNome() const;
        std::string getCPF() const;
        virtual double getSalario() const;

        // Impressão
        void imprime() const;
};

#endif
