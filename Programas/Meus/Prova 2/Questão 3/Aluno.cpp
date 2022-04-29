#include "Aluno.h"

Aluno::Aluno(std::string nome, std::string CPF, std::string curso) : Usuario(nome, CPF) {
    setCurso(curso);
}

Aluno::~Aluno() {}

void Aluno::setCurso(std::string curso) {
    this->curso = curso;
}

std::string Aluno::getCurso() const {
    return this->curso;
}

void Aluno::imprime() const { 
    std::cout << "[Aluno] " << getNome() << " " << getCPF() << " " << getCurso() << std::endl;
}

char Aluno::getTipo() const {
    return 'A';
}
