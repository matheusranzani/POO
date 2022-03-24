#include "Estudante.h"

// Exercício 2
namespace poo {
    Estudante::Estudante(
        std::string nome, std::string CPF, int RA, double P1, double P2, double T1, double T2) : 
        Pessoa(nome, CPF),
        RA(RA), P1(P1), P2(P2), T1(T1), T2(T2) {}

    Estudante::~Estudante() {}

    int Estudante::getRa() const {
        return RA;
    }

    double Estudante::media() {
        double MP = (P1 + P2) / 2;
        double MT = (T1 + T2) / 2;

        double MF = (MP * 8 + MT * 2) / 10;

        return MF;
    }
    
    bool Estudante::aprovado() {
        double MF = media();

        return MF >= 6.0 ? true : false;
    }

    bool Estudante::sac() {
        double MF = media();

        return (MF >= 5.0 && MF < 6.0) ? true : false;
    }

    double Estudante::notaSAC() {
        double MF = media();
        double SAC = 12.0 - MF;

        return sac() ? SAC : 0;
    }

    std::ostream& operator<<(std::ostream& saida, Estudante& e) {
        Pessoa p(e.getNome(), e.getCPF());
        operator<<(saida, p);
        
        saida << "Media Final: " << e.media() << std::endl;
    
        return saida;
    }
}
