#include "Escultura.h"

namespace catalogo {
    // Construtor
    Escultura::Escultura(std::string titulo, std::string artista, std::string material, int anoCriacao, double altura) :
    ObraDeArte(titulo, artista, material, anoCriacao) {
        setAltura(altura);
    }

    // Destrutor
    Escultura::~Escultura() {}

    void Escultura::setAltura(double altura) {
        this->altura = altura;
    }

    double Escultura::getAltura() const {
        return this->altura;
    }

    int Escultura::getCategoria() const {
        return 2;
    }

    void Escultura::imprimeFicha() const {
        std::cout << "Categoria: " << getCategoria() << " (Escultura)" << std::endl;
        std::cout << "Titulo: " << getTitulo() << std::endl;
        std::cout << "Artista: " << getArtista() << std::endl;
        std::cout << "Ano: " << getAno() << std::endl;
        std::cout << "Altura: " << getAltura() << std::endl;
        std::cout << std::endl;
    }
}
