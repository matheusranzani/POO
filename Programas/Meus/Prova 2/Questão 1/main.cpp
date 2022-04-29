#include "Hospital.h"
#include "Enfermeiro.h"
#include "Lider.h"

#define SALARIO 1000.00

#include <iostream>

int main() {
    Hospital h = Hospital("Unimed", "UM");
    Enfermeiro* e = new Enfermeiro("Luiz", "222.222.222-33", SALARIO, &h);
    Lider* l = new Lider("Pedro", "123.123.123-12", SALARIO, "Idosos", &h);

    h.imprime();
    std::cout << std::endl;
    e->imprime();
    std::cout << std::endl;
    l->imprime();

    delete e;
    delete l;

    return 0;
}
