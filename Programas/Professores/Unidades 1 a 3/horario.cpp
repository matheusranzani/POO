#include <iostream>
#include <iomanip>
	
class horario
{

    int hora, minuto, segundo;

public:
    horario();
    horario(int, int, int);

//metodos set
    void set_hora(int);
    void set_minuto(int);
    void set_segundo(int);

//metodos get
    int get_hora();
    int get_minuto() ;
    int get_segundo();
    void imprime();

};

horario::horario()
{
    hora = 0;
    minuto = 0;
    segundo = 0;
}
horario::horario(int h, int m, int s)
{
    set_hora(h);
    set_minuto(m);
    set_segundo(s);
}

void horario::set_hora(int h)
{
     hora = ( h >= 0 && h < 24 ) ? h : 0;
}

void horario::set_minuto(int m)
{
      minuto = ( m >= 0 && m < 59 ) ? m : 0;
}

void horario::set_segundo(int s)
{
      segundo = ( s >= 0 && s < 24 ) ? s : 0;
}

int horario::get_hora()
{
    return hora;
}

int horario::get_minuto()
{
    return minuto;
}

int horario::get_segundo()
{
    return segundo;
}

void horario::imprime()
{
    std::cout << std::setfill( '0' ) << std::setw( 2 ) << hora << ":"
            << std::setw( 2 ) << minuto << ":"
            << std::setw( 2 ) << segundo<<std::endl;
}


int main() {

    horario comer(12,0,0);
    horario dormir(30,90,75); //horário inválido

    std::cout << "horário de comer: ";
    comer.imprime();


    comer.set_hora(23);
    comer.set_minuto(15);
    comer.set_segundo(30);

    std::cout << "horário de comer modificado: ";
    comer.imprime();

    dormir.imprime();

    system("PAUSE");
}