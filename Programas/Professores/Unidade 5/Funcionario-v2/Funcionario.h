#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include <iostream>
using namespace std;

class Funcionario {
public:
    Funcionario(int CPF, string nome);
    virtual ~Funcionario();
    virtual void imprime() const;
    virtual string getProfissao() const = 0; // método abstrato

    static bool comparaNome(const Funcionario* f1, const Funcionario* f2);
    static bool comparaCPF(const Funcionario* f1, const Funcionario* f2);

private:
    int CPF;
    string nome;
};

#endif /* FUNCIONARIO_H */