#include "Pessoa.h"
#include "Cliente.h"

int main() {
    Pessoa amigo1;
    Pessoa amigo2 = Pessoa(20, "Matheus");

    amigo1.mostra_dados();
    amigo2.mostra_dados();

    std::cout << std::endl;

    Cliente cliente = Cliente(18, "Paulo", 3200.50);

    cliente.mostra_cliente();
    
    std::cout << std::endl;

    return 0;
}