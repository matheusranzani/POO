#include "Complexo.h"

Complexo::Complexo(double a, double b) : a(a), b(b) {}

Complexo::~Complexo() {}

Complexo Complexo::operator*(const Complexo& direita) const {
    double c = direita.a;
    double d = direita.b;

    return Complexo(a * c - b * d, a * d + b * c);
}

Complexo Complexo::operator/(const Complexo& direita) const {
    double c = direita.a;
    double d = direita.b;

    double a_modificado = (a * c + b * d) / (c * c + d * d);
    double b_modificado = (b * c - a * d) / (c * c + d * d);

    return Complexo(a_modificado, b_modificado);
}

bool Complexo::operator==(const Complexo& direita) const {
    return a == direita.a && b == direita.b;
}

bool Complexo::operator!=(const Complexo& direita) const {
    return !(*this == direita);
}

std::ostream& operator<<(std::ostream& saida, Complexo& complexo) {
    saida << complexo.a;
    
    if (complexo.b > 0) {
        saida << " + " << complexo.b << complexo.imaginario;
    }

    if (complexo.b < 0) {
        saida << " - " << std::abs(complexo.b) << complexo.imaginario;
    }
    
    return saida;
}
