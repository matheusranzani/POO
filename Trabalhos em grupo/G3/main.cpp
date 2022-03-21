#include "Pessoa.h"
#include "Estudante.h"
#include "Professor.h"

using namespace poo;

int main() {
    Pessoa p("Paulo", "56845816932");

    std::cout << p << std::endl; // Exercício 1
    
    Estudante e("William", "34255477650", 800386, 3.6, 6.3, 7.1, 6.7);

    std::cout << e << std::endl; // Exercício 2

    Professor prof("Douglas", "22543678248", "Universidade Federal de Sao Carlos (UFSCar)");

    std::cout << prof; // Exercício 3

    return 0;
}