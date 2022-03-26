#include "DataHorario.h"

#include <iomanip>

namespace poo {
    // construtor
    DataHorario::DataHorario(int dia, int mes, int ano, int hora, int minuto, int segundo) :
    dia(dia), mes(mes), ano(ano), hora(hora), minuto(minuto), segundo(segundo) {}

    // destrutor
    DataHorario::~DataHorario() {}

    int DataHorario::getDia() const { return dia; }
    int DataHorario::getMes() const { return mes; }
    int DataHorario::getAno() const { return ano; }
    int DataHorario::getHora() const { return hora; }
    int DataHorario::getMinuto() const { return minuto; }
    int DataHorario::getSegundo() const { return segundo; }

    bool DataHorario::operator<(const DataHorario& direita) const {
        if (this->getAno() < direita.getAno()) {
            return true;
        } else if (this->getAno() == direita.getAno()) {
            if (this->getMes() < direita.getMes()) {
                return true;
            } else if (this->getMes() == direita.getMes()) {
                if (this->getDia() < direita.getDia()) {
                    return true;
                } else if (this->getDia() == direita.getDia()) {
                    if (this->getHora() < direita.getHora()) {
                        return true;
                    } else if (this->getHora() == direita.getHora()) {
                        if (this->getMinuto() < direita.getMinuto()) {
                            return true;
                        } else if (this->getMinuto() == direita.getMinuto()) {
                            if (this->getSegundo() < direita.getSegundo()) {
                                return true;
                            }
                        }
                    }
                }
            }
        }

        return false;
    }
    
    bool DataHorario::operator==(const DataHorario& direita) const {
        if (this->getAno() == direita.getAno() && this->getMes() == direita.getMes() && this->getDia() == direita.getDia() &&
            this->getHora() == direita.getHora() && this->getMinuto() == direita.getMinuto() && this->getSegundo() == direita.getSegundo()) {
            return true;    
        } else {
            return false;
        }
    }

    bool DataHorario::operator<=(const DataHorario& direita) const {
        return (*this < direita) || (*this == direita);
    }

    bool DataHorario::operator!=(const DataHorario& direita) const {
        return !(*this == direita);
    }

    bool DataHorario::operator>(const DataHorario& direita) const {
        return !(*this <= direita);
    }
    
    bool DataHorario::operator>=(const DataHorario& direita) const {
        return (*this > direita) || (*this == direita); 
    }

    std::ostream& operator<<(std::ostream& saida, DataHorario& dh) {
        std::string mes_string = ""; 
        std::string vetor_mes[12] = {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"}; //variável usada para converter o mês inteiro para extenso
        mes_string = vetor_mes[dh.getMes()-1]; //é usado -1 pois o vetor começa com 0
        

        saida << "Data: ";
        saida << std::setfill('0') << std::setw(2) << dh.getDia() << " de ";
        saida << mes_string << " de ";
        saida << std::setfill('0') << std::setw(4) << dh.getAno();

        saida << " - ";

        saida << std::setfill('0') << std::setw(2) << dh.getHora() << " horas, ";
        saida << std::setfill('0') << std::setw(2) << dh.getMinuto() << " minutos e ";
        saida << std::setfill('0') << std::setw(2) << dh.getSegundo() << " segundos" << std::endl;
        
        return saida;
    }
}
