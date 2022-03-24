#ifndef SESSAO_H
#define SESSAO_H

#include "DataHorario.h"
#include "Pessoa.h"

// Exercício 5
namespace poo {
    class Sessao {
    private:
        std::string nome_peca;
        DataHorario data_horario;
        Pessoa *pessoa[15][14];

    public:
        Sessao(std::string, DataHorario &);
        ~Sessao();

        std::string proximoLivre();
        bool verifica(std::string);
        bool ocupa(std::string, Pessoa &);
        bool desocupa(std::string);
        int vagas();

        friend std::ostream &operator<<(std::ostream &, Sessao &);
    };
}

#endif
