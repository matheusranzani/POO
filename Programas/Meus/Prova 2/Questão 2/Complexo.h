#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>
#include <cmath> // Uso da função abs() para uma impressão mais formatada

class Complexo {
    private:
        // Atributos constantes
        const double a;
        const double b;
        const char imaginario = 'i';

    public:
        // Construtor e Destrutor
        Complexo(double, double);
        ~Complexo();

        // Sobrecarga de Operadores
        Complexo operator*(const Complexo&) const;
        Complexo operator/(const Complexo&) const;
        bool operator==(const Complexo&) const;
        bool operator!=(const Complexo&) const;
        friend std::ostream& operator<<(std::ostream&, Complexo&);
};

#endif
