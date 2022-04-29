#include "Hospital.h"

Hospital::Hospital(std::string nome, std::string sigla) {
    setNome(nome);
    setSigla(sigla);
}

Hospital::~Hospital() {}

void Hospital::setNome(std::string nome) {
    this->nome = nome;
}

void Hospital::setSigla(std::string sigla) {
    this->sigla = sigla;
}

std::string Hospital::getNome() const {
    return this->nome;
}

std::string Hospital::getSigla() const {
    return this->sigla;
}

void Hospital::imprime() const {
    std::cout << "[Hospital]" << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Sigla: " << getSigla() << std::endl;
}
