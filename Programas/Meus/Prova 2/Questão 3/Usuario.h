#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>

class Usuario {
    private:
        // Atributos
        std::string nome;
        std::string CPF;

    public:
        // Construtor e Destrutor
        Usuario(std::string, std::string);
        ~Usuario();

        // Setters
        void setNome(std::string);
        void setCPF(std::string);

        // Getters
        std::string getNome() const;
        std::string getCPF() const;

        virtual void imprime() const = 0;
        virtual char getTipo() const = 0;
};

#endif