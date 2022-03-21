#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include "Pessoa.h"

// Exercício 2
namespace poo {
    class Estudante : public Pessoa {
        private:
            int RA;
            double P1, P2;
            double T1, T2;
        public:
            Estudante(std::string, std::string, int, double, double, double, double);
            ~Estudante();

            int getRa() const;

            double media();
            bool aprovado();
            bool sac();
            double notaSAC();

            friend std::ostream& operator<<(std::ostream&, Estudante);
    };
}

#endif
