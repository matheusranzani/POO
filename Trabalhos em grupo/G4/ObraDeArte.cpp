#include "ObraDeArte.h"

namespace catalogo {
    // Construtor
    ObraDeArte::ObraDeArte(std::string titulo, std::string artista, std::string material, int anoCriacao) {
        setTitulo(titulo);
        setArtista(artista);
        setMaterial(material);
        setAno(anoCriacao);
    }

    // Destrutor
    ObraDeArte::~ObraDeArte() {}

    void ObraDeArte::setTitulo(std::string titulo) {
        this->titulo = titulo;
    }

    void ObraDeArte::setArtista(std::string artista) {
        this->artista = artista;
    }

    void ObraDeArte::setMaterial(std::string material) {
        this->material = material;
    }

    void ObraDeArte::setAno(int ano) {
        this->ano = ano;
    }

    std::string ObraDeArte::getTitulo() const {
        return this->titulo;
    }

    std::string ObraDeArte::getArtista() const {
        return this->artista;
    }

    std::string ObraDeArte::getMaterial() const {
        return this->material;
    }

    int ObraDeArte::getAno() const {
        return this->ano;
    }
}
