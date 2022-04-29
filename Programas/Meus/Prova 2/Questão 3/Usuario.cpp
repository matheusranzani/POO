#include "Usuario.h"

Usuario::Usuario(std::string nome, std::string CPF) {
    setNome(nome);
    setCPF(CPF);
}

Usuario::~Usuario() {}

void Usuario::setNome(std::string nome) {
    this->nome = nome;
}

void Usuario::setCPF(std::string CPF) {
    this->CPF = CPF;
}

std::string Usuario::getNome() const {
    return this->nome;
}

std::string Usuario::getCPF() const {
    return this->CPF;
}
