#include "Sessao.h"

namespace poo {
    // construtor
    Sessao::Sessao(std::string nome_peca, DataHorario& dh) : nome_peca(nome_peca), data_horario(dh) {
        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 14; j++) {
                pessoa[i][j] = NULL;
            }
        }
    }

    // destrutor
    Sessao::~Sessao() {}

    // retorna se o próximo assento está livre
    std::string Sessao::proximoLivre() {
        std::string s = "";

        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 14; j++) {
                s = i + 'A';
                s += std::to_string(j + 1);

                if (!verifica(s)) {
                    return s;
                }
            }
        }
      
        return "cheio";
    }

    // verifica se o assento está ocupado
    bool Sessao::verifica(std::string s) {
        int linha = s[0] - 'A';
        int coluna = std::stoi(s.substr(1)) - 1;

        if (pessoa[linha][coluna] == NULL) {
            return false;
        }

        return true;
    }

    // ocupa o assento indicado
    bool Sessao::ocupa(std::string s, Pessoa& p) {
        if (s == "cheio") { // caso a string seja igual a cheio, significa que o proximo livre chegou no ultimo assento disponível
            return false;
        }
        // convertnedo para poder acessar a posição
        int linha = s[0] - 'A';
        int coluna = std::stoi(s.substr(1)) - 1;

        if (verifica(s)) {
            return false;
        }

        pessoa[linha][coluna] = &p;

        return true;
    }

    // desocupa o assento indicado
    bool Sessao::desocupa(std::string s) {
        int linha = s[0] - 'A';
        int coluna = std::stoi(s.substr(1)) - 1;

        if (!verifica(s)) {
            return false;
        }

        pessoa[linha][coluna] = NULL;
      
        return true;
    }
    
    // verifica a quantidade de vagas restantes
    int Sessao::vagas() {
        int total_vagas = 0;
        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 14; j++) {
                std::string s;
                s = i + 'A';
                s += std::to_string(j + 1);

                if (verifica(s)) {
                    total_vagas++;
                }
            }
        }

        return total_vagas;
    }

    // imprime o objeto do tipo Sessão
    std::ostream& operator<<(std::ostream& saida, Sessao& s) {
        saida << "Nome da peca: " << s.nome_peca << std::endl;
        operator<<(saida, s.data_horario);

        saida << std::endl;

        bool ocupado = false;

        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 14; j++) {
                std::string assento;
                assento = i + 'A';
                assento += std::to_string(j + 1);

                ocupado = s.verifica(assento);

                if (ocupado) {
                    saida << "Assento: " << assento 
                        << " | Nome: " << s.pessoa[i][j]->getNome()
                        << " - CPF: " << s.pessoa[i][j]->getCPF() << std::endl;
                }
            }
            if (ocupado) {
                saida << std::endl;
            }
        }

        return saida;
    }
}