#include "Enfermeiro.h"

Enfermeiro::Enfermeiro(std::string nome, std::string CPF, double salario, Hospital* hospital) : 
    hospital(hospital) {
        setNome(nome);
        setCPF(CPF);
        setSalario(salario);
}

Enfermeiro::~Enfermeiro() {}

void Enfermeiro::setNome(std::string nome) {
    this->nome = nome;
}

void Enfermeiro::setCPF(std::string CPF) {
    this->CPF = CPF;
}

void Enfermeiro::setSalario(double salario) {
    this->salario = salario;
}

std::string Enfermeiro::getNome() const {
    return this->nome;
}

std::string Enfermeiro::getCPF() const {
    return this->CPF;
}

double Enfermeiro::getSalario() const {
    return this->salario;
}

void Enfermeiro::imprime() const {
    // std::cout << "[Enfermeiro]" << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "CPF: " << getCPF() << std::endl;
    std::cout << "Salario: " << getSalario() << std::endl;
    std::cout << "Hospital: " << hospital->getNome() << " (" << hospital->getSigla() << ")" << std::endl;
}
