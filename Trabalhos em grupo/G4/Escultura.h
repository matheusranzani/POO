#ifndef ESCULTURA_H
#define ESCULTURA_H

#include "ObraDeArte.h"

namespace catalogo {
    class Escultura : public ObraDeArte {
        private:
            // Atributo
            double altura;

        public:
            // Construtor e Destrutor
            Escultura(std::string, std::string, std::string, int, double);
            virtual ~Escultura();

            // Setter
            void setAltura(double);

            // Getters
            double getAltura() const;
            virtual int getCategoria() const;

            // Impressão das esculturas
            virtual void imprimeFicha() const;
    };
}

#endif
