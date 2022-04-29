#include <iostream>
#include <exception>

using namespace std;

void alloc(int n) {
    if (n < 0) {
        throw invalid_argument("alloc: argumento deve ser positivo !!");
    }

    // if n maior que 28500 => bad_alloc exception

    for (int i = 1; i <= n; i++) {
            new int[123456789]; 
            cout << "Alocado (" << i << ") ..." << endl;
    }
}

int main() {
    try {
        int N;
        cout << "Valor de N: ";
        cin >> N;
        alloc(N);
    }
    catch (invalid_argument const ia) {
        cout << ia.what() << endl;
    }
    catch (bad_alloc const &) {
        cout << "Faltou Memoria..." << endl;
    } // aqui o objeto T não existe mais !!

    cout << "Fim ..." << endl;
    return 0;
}