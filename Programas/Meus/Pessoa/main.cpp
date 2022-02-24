#include "Pessoa.h"

int main() {
    Pessoa amigo1;
    Pessoa amigo2 = Pessoa(1, 20, "Matheus");

    amigo1.mostra_dados();
    amigo2.mostra_dados();

    return 0;
}