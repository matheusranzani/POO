#include "Fila.h"

int main() {
    Fila f(5);

    f.insere('a');
    f.insere('d');
    f.insere('h');
    f.insere('x');
    f.insere('z');
    f.imprime();

    Fila copia(f);

    // for (int i = 0; i < copia.get_tamanho(); i++) {
    //     copia.set_valor(i, 'a');
    // }
    copia.imprime();

    // char retirado = f.retira();
    // std::cout << "Elemento retirado: " << retirado << std::endl;

    // f.imprime();

    return 0;
}