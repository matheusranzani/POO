#include "Museu.h"

namespace catalogo {
    // Construtor
    Museu::Museu(std::string nome) {
        setNome(nome);
    }

    // Destrutor
    Museu::~Museu() {}

    void Museu::setNome(std::string nome) {
        this->nome = nome;
    }

    std::string Museu::getNome() const {
        return this->nome;
    }

    bool Museu::adicionaObra(ObraDeArte* obra) {
        for (int i = 0; i < obras.size(); i++) {
            if (obras.at(i)->getTitulo() == obra->getTitulo()) {
                return false;
            }
        }

        obras.push_back(obra); // Adiciona a obra no fim do vetor
        
        return true;
    }

    bool Museu::removeObra(std::string titulo) {
        for (int i = 0; i < obras.size(); i++) {
            if (obras.at(i)->getTitulo() == titulo) {
                obras.erase(obras.begin() + i); // Remove o elemento de índice i
                
                return true;
            }
        }

        return false;
    }

    ObraDeArte* Museu::obtemObra(std::string titulo) {
        for (int i = 0; i < obras.size(); i++) {
            if (obras.at(i)->getTitulo() == titulo) {
                return obras.at(i); // Retorna a obra encontrada
            }
        }

        return NULL;
    }

    int Museu::qtdeObras() const {
        return obras.size();
    }

    int Museu::qtdePinturas() const {
        int qtde_pinturas = 0;
        
        for (int i = 0; i < obras.size(); i++) {
            if (obras.at(i)->getCategoria() == 1) { // Categoria de pinturas = 1
                qtde_pinturas++;
            }
        }

        return qtde_pinturas;
    }

    int Museu::qtdeEsculturas() const {
        int qtde_esculturas = 0;
        
        for (int i = 0; i < obras.size(); i++) {
            if (obras.at(i)->getCategoria() == 2) { // Categoria de esculturas = 2
                qtde_esculturas++;
            }
        }

        return qtde_esculturas;
    }

    void Museu::imprime(int categoria) const {
        if (categoria == 0) { // 0 = Todos
            for (int i = 0; i < obras.size(); i++) {
                obras.at(i)->imprimeFicha();
            }
        }

        if (categoria == 1) { // 1 = Pinturas
            for (int i = 0; i < obras.size(); i++) {
                if (obras.at(i)->getCategoria() == categoria) {
                    obras.at(i)->imprimeFicha();
                }
            }
        } 
        
        if (categoria == 2) { // 2 = Esculturas
            for (int i = 0; i < obras.size(); i++) {
                if (obras.at(i)->getCategoria() == categoria) {
                    obras.at(i)->imprimeFicha();
                }
            }
        }
    }
}
