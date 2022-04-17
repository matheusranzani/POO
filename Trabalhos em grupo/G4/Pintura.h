#ifndef PINTURA_H
#define PINTURA_H

#include "ObraDeArte.h"

namespace catalogo {
    class Pintura : public ObraDeArte {
        private:
            // Atributo
            std::string tipo;

        public:
            // Construtor e Destrutor
            Pintura(std::string, std::string, std::string, int, std::string);
            virtual ~Pintura();

            // Setter
            void setTipo(std::string);

            // Getters
            std::string getTipo() const;
            virtual int getCategoria() const;

            // Impressão das pinturas 
            virtual void imprimeFicha() const;
    };
}

#endif
