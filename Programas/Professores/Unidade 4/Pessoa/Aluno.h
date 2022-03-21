#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

class Aluno : public Pessoa {
public:
    Aluno(string nome, int idade, int RA);
    int getRA() const;
    void setRA(int RA);
    void imprime() const;
private:
    int RA;
};

#endif /* ALUNO_H */
