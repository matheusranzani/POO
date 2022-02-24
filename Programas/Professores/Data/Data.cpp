#include <iostream>
#include <string>
#include <iomanip>
#include "Data.h"

using namespace std;

Data::Data(int dia, int mes, int ano) :
dia(dia), mes(mes), ano(ano) {
}

Data::~Data() {
}

void Data::imprime() const {
    cout << setfill('0') << setw(2) << dia << "/";
    cout << setfill('0') << setw(2) << mes << "/";
    cout << ano << endl;
}

void Data::imprimePorExtenso() const {
    string meses[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    cout << setfill('0') << setw(2) << dia << " de ";
    cout << meses[mes - 1] << " de ";
    cout << ano << endl;
}

/* 
void Data::imprimePorExtenso() {
    string s;
    switch(mes) {
        case 1: s = "Janeiro"; break;
        case 2: s = "Fevereiro"; break;
        case 3: s = "Março"; break;
        case 4: s = "Abril"; break;
        case 5: s = "Maio"; break;
        case 6: s = "Junho"; break;
        case 7: s = "Julho"; break;
        case 8: s = "Agosto"; break;
        case 9: s = "Setembro"; break;
        case 10: s = "Outubro"; break;
        case 11: s = "Novembro"; break;
        case 12: s = "Dezembro"; break;
    }
    
    cout << dia << " de " << s << " de " << ano << endl;
}
 */

bool Data::anoBissexto() const {
    bool bissexto = false;

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        bissexto = true;
    }

    return bissexto;
}

int Data::compare(Data data) const {
    if (this->ano != data.ano) {
        return this->ano - data.ano;
    } else if (this->mes != data.mes) {
        return this->mes - data.mes;
    } else {
        return this->dia - data.dia;
    }
}

/*
int Data::compare(Data data) {
    int value1 = ano * 10000 + mes * 100 + dia;
    int value2 = data.ano * 10000 + data.mes * 100 + data.dia;
    return value1 - value2;
}
 */