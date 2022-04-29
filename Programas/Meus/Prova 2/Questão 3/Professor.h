#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Usuario.h"

class Professor : public Usuario {
    private:
        // Atributo
        std::string departamento;

    public:
        // Construtor e Destrutor
        Professor(std::string, std::string, std::string);
        ~Professor();

        // Setter e Getter
        void setDepartamento(std::string);
        std::string getDepartamento() const;

        virtual void imprime() const;
        virtual char getTipo() const;
};

#endif
