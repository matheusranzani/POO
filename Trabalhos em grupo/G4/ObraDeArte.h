#ifndef OBRADEARTE_H
#define OBRADEARTE_H

#include <iostream>

namespace catalogo {
    class ObraDeArte {
        private:
            // Atributos
            std::string titulo;
            std::string artista;
            std::string material;
            int ano;

        public:
            // Construtor e Destrutor
            ObraDeArte(std::string, std::string, std::string, int);
            virtual ~ObraDeArte();

            // Setters
            void setTitulo(std::string);
            void setArtista(std::string);
            void setMaterial(std::string);
            void setAno(int);

            // Getters
            std::string getTitulo() const;
            std::string getArtista() const;
            std::string getMaterial() const;
            int getAno() const;

            // Métodos abstratos
            virtual int getCategoria() const = 0;
            virtual void imprimeFicha() const = 0;
    };
}

#endif
