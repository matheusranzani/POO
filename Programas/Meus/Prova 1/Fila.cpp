#include "Fila.h"

int Fila::contador = 0; // Inicialização do contador de filas

Fila::Fila(int _tamanho) {
    // Inicialização dos atributos da fila para que ela comece vazia
    primeiro = 0;
    ultimo = 0;
    posicao = 0;

    _tamanho > 0 ? tamanho = _tamanho : tamanho = 10; // 10 é o valor padrão

    elementos = new char[tamanho];

    ++contador;
}

Fila::~Fila() {
    delete [] elementos;

    --contador;
}

Fila::Fila(Fila &f) : tamanho(f.tamanho) {
    elementos = new char[tamanho];

    // Cópia profunda do objeto
    for (int i = 0; i < tamanho; i++) {
        elementos[i] = f.elementos[i];
    }
}

void Fila::insere(char elemento) {
    if (posicao == tamanho) { // Verificação se a fila está cheia
        return;
    } else { // Caso a fila não esteja cheia, insere o elemento recebido no fim da fila
        elementos[ultimo] = elemento;
        ultimo = (ultimo + 1) % tamanho; // Atualiza o índice do ultimo elemento (nesse caso o vetor é circular)
        posicao++;
    }
}

char Fila::retira() {
    if (posicao != 0) { // Verificação se a fila está não vazia
        char elemento = elementos[primeiro];
        primeiro = (primeiro + 1) % tamanho;
        posicao--;

        return elemento;
    }
}

bool Fila::get_valor(int posicao, char &_valor) {
    if (posicao >= 0 && posicao < tamanho) {
        _valor = elementos[posicao];
        
        return true;
    } else {
        return false;
    }
}

// bool Fila::set_valor(int pos, int val)
// {
//    if (pos >=0 && pos < tamanho)
//       {
//       elementos[pos] = val; 
//       return true;
//       }
//    else 
//       return false;   
// }

int Fila::get_tamanho() {
    return tamanho;
}

void Fila::imprime() {
    char valor;

    for (int i = 0; i < get_tamanho(); i++) {
        std::cout << elementos[i] << " ";
    }

    std::cout << std::endl;
}

int Fila::get_contador() {
    return contador;
}