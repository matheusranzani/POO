#include "Pessoa.h"

Pessoa::Pessoa() {
    idade = 25;
    nome = "Fulano";
}

Pessoa::Pessoa(int _idade, std::string _nome) {
    idade = _idade;
    nome = _nome;
}

Pessoa::~Pessoa() {
    std::cout << "Classe destruida" << std::endl;
}

void Pessoa::set_idade(int _idade) {
    idade = _idade;
}

void Pessoa::set_nome(std::string _nome) {
    nome = _nome;
}

int Pessoa::get_idade() {
    return idade;
}

std::string Pessoa::get_nome() {
    return nome;
}

void Pessoa::mostra_dados() {
    std::cout << "Idade = " << get_idade() << std::endl;
    std::cout << "Nome = " << get_nome() << std::endl;
}