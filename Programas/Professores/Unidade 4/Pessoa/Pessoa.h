#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>
using namespace std;

class Pessoa {
public:
        Pessoa(string nome, int idade);
        int getIdade() const;
        void setIdade(int idade);
        string getNome() const;
        void setNome(string nome);
        void imprime() const;
        int compare(const Pessoa p) const;
    private:
       string nome;
       int idade;
    };

#endif /* PESSOA_H */
