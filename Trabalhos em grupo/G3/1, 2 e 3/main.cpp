#include "Pessoa.h"
#include "Estudante.h"
#include "Professor.h"

using namespace poo;

void imprime(Estudante& estudante) {
    std::cout << estudante;
    std::cout << "[Final] ";
    if (estudante.aprovado()) {
        std::cout << "Estudante aprovado" << std::endl;
    } else if (estudante.sac()) {
        std::cout << "(SAC) Nota minima: " << estudante.notaSAC() << std::endl;
    } else {
        std::cout << "Estudante reprovado." << std::endl;
    }
}

int main() {
    Pessoa p1("Pedro", "123.456.789-01");
    std::cout << p1 << std::endl;

    Estudante e1("Ana", "111.111.111-11", 800001, 3, 3, 7, 8);
    imprime(e1);
    std::cout << std::endl;
 
    Estudante e2("Beto", "222.222.222-22", 800002, 6, 5, 7, 8);
    imprime(e2);
    std::cout << std::endl;

    Estudante e3("Carlos", "333.333.333-33", 800003, 7, 8, 7, 8);
    imprime(e3);
    std::cout << std::endl;

    Professor p2("David", "444.444.444-44", "UFSCar");

    return 0;
}