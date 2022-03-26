#ifndef DATAHORARIO_H
#define DATAHORARIO_H

#include <iostream>

namespace poo {
    class DataHorario {
        private:
            int dia;
            int mes;
            int ano;
            int hora;
            int minuto;
            int segundo;

        public:
            DataHorario(int, int, int, int, int, int);
            ~DataHorario();

            int getDia() const;
            int getMes() const;
            int getAno() const;
            int getHora() const;
            int getMinuto() const;
            int getSegundo() const;

            bool operator<(const DataHorario&) const;
            bool operator==(const DataHorario&) const;
            bool operator<=(const DataHorario&) const;
            bool operator!=(const DataHorario&) const;
            bool operator>(const DataHorario&) const;
            bool operator>=(const DataHorario&) const;

            friend std::ostream& operator<<(std::ostream& saida, DataHorario&);
    };
}

#endif
