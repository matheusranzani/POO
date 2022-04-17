#include "Pintura.h"

namespace catalogo {
    // Construtor
    Pintura::Pintura(std::string titulo, std::string artista, std::string material, int anoCriacao, std::string tipo) :
    ObraDeArte(titulo, artista, material, anoCriacao) {
        setTipo(tipo);
    }

    // Destrutor
    Pintura::~Pintura() {}

    void Pintura::setTipo(std::string tipo) {
        this->tipo = tipo;
    }

    std::string Pintura::getTipo() const {
        return this->tipo;
    }

    int Pintura::getCategoria() const {
        return 1;
    }

    void Pintura::imprimeFicha() const {
        std::cout << "Categoria: Pintura" << std::endl;
        std::cout << "Titulo: " << getTitulo() << std::endl;
        std::cout << "Artista: " << getArtista() << std::endl;
        std::cout << "Material: " << getMaterial() << std::endl;
        std::cout << "Ano: " << getAno() << std::endl;
        std::cout << "Tipo: " << getTipo() << std::endl;
        std::cout << std::endl;
    }
}
