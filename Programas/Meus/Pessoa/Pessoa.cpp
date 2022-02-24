#include "Pessoa.h"

Pessoa::Pessoa() {
    id = 1;
    idade = 25;
    nome = "Fulano";
}

Pessoa::Pessoa(int _id, int _idade, std::string _nome) {
    id = _id;
    idade = _idade;
    nome = _nome;
}

Pessoa::~Pessoa() {
    std::cout << "\nClasse destruida" << std::endl;
}

void Pessoa::set_id(int _id) {
    id = _id;
}

void Pessoa::set_idade(int _idade) {
    idade = _idade;
}

void Pessoa::set_nome(std::string _nome) {
    nome = _nome;
}

int Pessoa::get_id() {
    return id;
}

int Pessoa::get_idade() {
    return idade;
}

std::string Pessoa::get_nome() {
    return nome;
}

void Pessoa::mostra_dados() {
    std::cout << "ID = " << get_id() << std::endl;
    std::cout << "Idade = " << get_idade() << std::endl;
    std::cout << "Nome = " << get_nome() << std::endl;
}