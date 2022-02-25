#include <iostream>

class Fila {
    private:
        // Atributos da fila
        int primeiro;
        int ultimo;
        int tamanho;
        int posicao;

        char *elementos;

        static int contador; // Atributo para contar a quantidade de filas

    public:
        Fila(int _tamanho); // Construtor que recebe o tamanho máximo da fila
        Fila(Fila &f); // Construtor de cópia
        ~Fila();
        
        void insere(char elemento); // Método que insere o elemento recebido no fim da fila
        char retira(); // Método que retira e retorna o primeiro elemento da fila

        // Métodos para a impressão da fila
        int get_tamanho();
        bool get_valor(int posicao, char &_valor);
        void imprime();

        static int get_contador(); // Método que retorna a quantidade atual de filas
};