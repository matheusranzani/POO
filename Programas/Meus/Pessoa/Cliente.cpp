#include "Cliente.h"

Cliente::Cliente(int idade, std::string nome, float salario) : Pessoa(idade, nome) {
    set_salario(salario);
}

// Cliente::Cliente(int idade, std::string nome, float _salario) {
//     set_idade(idade);
//     set_nome(nome);
//     salario = _salario;
// }

Cliente::~Cliente() {}

void Cliente::set_salario(float _salario) {
    salario = _salario;
}

float Cliente::get_salario() {
    return salario;
}

void Cliente::mostra_cliente() {
    mostra_dados();
    std::cout << "Salario = " << get_salario() << std::endl;
}