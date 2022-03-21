#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

class Pessoa {
    private:
        int idade;
        std::string nome;

    public:
        Pessoa();
        Pessoa(int _idade, std::string _nome);
        ~Pessoa();

        void set_idade(int);
        void set_nome(std::string);
        
        int get_idade();
        std::string get_nome();
        
        void mostra_dados();
};

#endif
