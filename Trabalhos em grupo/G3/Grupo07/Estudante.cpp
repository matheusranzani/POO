#include "Estudante.h"

namespace poo {
    // construtor
    Estudante::Estudante(
        std::string nome, std::string CPF, int RA, double P1, double P2, double T1, double T2) : 
        Pessoa(nome, CPF),
        RA(RA), P1(P1), P2(P2), T1(T1), T2(T2) {}

    // destrutor
    Estudante::~Estudante() {}

    // retorna o RA do estudante
    int Estudante::getRa() const {
        return RA;
    }

    // retorna a média das notas do estudante 
    double Estudante::media() {
        double MP = (P1 + P2) / 2;
        double MT = (T1 + T2) / 2;

        double MF = (MP * 8 + MT * 2) / 10;

        return MF;
    }

    // retorna se o estudante foi aprovado ou não
    bool Estudante::aprovado() {
        double MF = media();
      
        return MF >= 6.0 ? true : false;
    }

    // retorna se o estudante precisa ou não fazer a avaliação complementat
    bool Estudante::sac() {
        double MF = media();

        return (MF >= 5.0 && MF < 6.0) ? true : false;
    }

    // retorna a nota mínima que o estudante precisa tirar na avaliação complementar para ser aprovado
    double Estudante::notaSAC() {
        double MF = media();
        double SAC = 12.0 - MF;

        return sac() ? SAC : 0;
    }

    // imprime o objeto do tipo Sessão
    std::ostream& operator<<(std::ostream& saida, Estudante& e) {
        Pessoa p(e.getNome(), e.getCPF());
        operator<<(saida, p);
        
        saida << "Media Final: " << e.media() << std::endl;
    
        return saida;
    }
}
