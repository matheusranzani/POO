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
                return false; // Se já existe a obra no vetor retorna falso
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

        return NULL; // Se não encotrar a obra retorna null
    }

    // Retorna o total de obras (pinturas e esculturas)
    int Museu::qtdeObras() const {
        return obras.size();
    }

    // Retorna o total de pinturas
    int Museu::qtdePinturas() const {
        int qtde_pinturas = 0;
        
        for (int i = 0; i < obras.size(); i++) {
            if (obras.at(i)->getCategoria() == 1) { // Categoria de pinturas = 1
                qtde_pinturas++;
            }
        }

        return qtde_pinturas;
    }

    // Retorna o total de esculturas
    int Museu::qtdeEsculturas() const {
        int qtde_esculturas = 0;
        
        for (int i = 0; i < obras.size(); i++) {
            if (obras.at(i)->getCategoria() == 2) { // Categoria de esculturas = 2
                qtde_esculturas++;
            }
        }

        return qtde_esculturas;
    }

    void Museu::imprime(int categoria) {
        // Ordena o vetor obras pelo ano + título
        std::sort(obras.begin(), obras.end(), [](ObraDeArte* o1, ObraDeArte* o2) {
            if (o1->getAno() != o2->getAno()) { // Se o ano for diferente, a obra com menor ano aparece antes
                return o1->getAno() < o2->getAno();
            } else { // Se os anos forem iguais, ordena por ordem alfabética usando o título
                return o1->getTitulo() < o2->getTitulo();
            }
        });

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
