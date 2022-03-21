#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"

class Cliente : public Pessoa {
    private:
        float salario;
    public:
        Cliente(int, std::string, float);
        ~Cliente();

        void set_salario(float);
        float get_salario();

        void mostra_cliente();
};

#endif
