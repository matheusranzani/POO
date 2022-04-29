#include <iostream>

#include "Complexo.h"

int main() {
    Complexo z1 = Complexo(1, 2);
    Complexo z2 = Complexo(3, 4);
    Complexo z3 = Complexo(1, 2);

    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;
    std::cout << "z3 = " << z3 << std::endl;

    std::cout << std::endl;

    Complexo multiplicacao = z1 * z2;
    std::cout << "z1 * z2 = " << multiplicacao << std::endl;

    Complexo divosao = z1 / z2;
    std::cout << "z1 / z2 = " << divosao << std::endl;

    std::cout << std::boolalpha << std::endl;
    
    std::cout << "z1 == z2 " << (z1 == z2) << std::endl; 
    std::cout << "z1 == z3 " << (z1 == z3) << std::endl;
    std::cout << "z1 != z2 " << (z1 != z2) << std::endl; 
    std::cout << "z1 != z3 " << (z1 != z3) << std::endl;

    std::cout << std::endl;

    Complexo z4 = Complexo(-1, -7);
    Complexo z5 = Complexo(3, 0);

    std::cout << "z4 = " << z4 << std::endl;
    std::cout << "z5 = " << z5 << std::endl;

    return 0;
}
