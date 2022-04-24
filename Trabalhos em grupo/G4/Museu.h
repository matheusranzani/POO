#ifndef MUSEU_H
#define MUSEU_H

#include "ObraDeArte.h"

#include <iostream>
#include <vector> // Estrutura da API STL C++
#include <algorithm> // Para ordenação das obras (std::sort)

namespace catalogo {
    class Museu {
        private:
            // Atributos
            std::string nome;
            std::vector<ObraDeArte*> obras; // Vetor das obras

        public:
            // Construtor e Destrutor
            Museu(std::string);
            virtual ~Museu();

            // Setter
            void setNome(std::string);

            // Getter
            std::string getNome() const;

            // Métodos para a manipulação das obras
            bool adicionaObra(ObraDeArte*);
            bool removeObra(std::string);
            ObraDeArte* obtemObra(std::string);
            int qtdeObras() const;
            int qtdePinturas() const;
            int qtdeEsculturas() const;

            // Impressão dos obejtos
            void imprime(int);
    };
}

#endif
