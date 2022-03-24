#include "DataHorario.h"

#include <iomanip>

// Exercício 4
namespace poo {
    DataHorario::DataHorario(int dia, int mes, int ano, int hora, int minuto, int segundo) :
    dia(dia), mes(mes), ano(ano), hora(hora), minuto(minuto), segundo(segundo) {}

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
        } else if (this->getMes() < direita.getMes()) {
            return true;
        } else if (this->getDia() < direita.getDia()) {
            return true;
        } else if (this->getHora() < direita.getHora()) {
            return true;
        } else if (this->getMinuto() < direita.getMinuto()) {
            return true;
        } else if (this->getSegundo() < direita.getSegundo()) {
            return true;
        } else {
            return false;
        }
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
        saida << "Data: ";
        saida << std::setfill('0') << std::setw(2) << dh.getDia() << "/";
        saida << std::setfill('0') << std::setw(2) << dh.getMes() << "/";
        saida << std::setfill('0') << std::setw(4) << dh.getAno();

        saida << " Horario: ";

        saida << std::setfill('0') << std::setw(2) << dh.getHora() << ":";
        saida << std::setfill('0') << std::setw(2) << dh.getMinuto() << ":";
        saida << std::setfill('0') << std::setw(2) << dh.getSegundo() << std::endl;
        
        return saida;
    }
}
