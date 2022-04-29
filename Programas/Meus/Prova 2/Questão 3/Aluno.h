#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"

class Aluno : public Usuario {
    private:
        // Atributo
        std::string curso;

    public:
        // Construtor e Destrutor
        Aluno(std::string, std::string, std::string);
        ~Aluno();

        // Setter e Getter
        void setCurso(std::string);
        std::string getCurso() const;

        virtual void imprime() const;
        virtual char getTipo() const;
};

#endif
