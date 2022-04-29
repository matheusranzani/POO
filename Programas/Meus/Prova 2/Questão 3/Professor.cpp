#include "Professor.h"

Professor::Professor(std::string nome, std::string CPF, std::string departamento) : Usuario(nome, CPF) {
    setDepartamento(departamento);
}

Professor::~Professor() {}

void Professor::setDepartamento(std::string departamento) {
    this->departamento = departamento;
}

std::string Professor::getDepartamento() const {
    return this->departamento;
}

void Professor::imprime() const {
    std::cout << "[Professor] " << getNome() << " " << getCPF() << " " << getDepartamento() << std::endl;
}

char Professor::getTipo() const {
    return 'P';
}
