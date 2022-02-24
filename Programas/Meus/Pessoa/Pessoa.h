#include <iostream>

class Pessoa {
    private:
        int id;
        int idade;
        std::string nome;

    public:
        Pessoa();
        Pessoa(int _id, int _idade, std::string _nome);
        ~Pessoa();

        void set_id(int);
        void set_idade(int);
        void set_nome(std::string);
        
        int get_id();
        int get_idade();
        std::string get_nome();
        
        void mostra_dados();
};