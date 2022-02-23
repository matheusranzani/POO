#include <iostream>
#include "Garrafa.h"
#define VOLUME_PADRAO 2000
#define COR_PADRAO "Azul"

Garrafa::Garrafa() : 
    volumeMax(VOLUME_PADRAO),
    cor(COR_PADRAO),
    volumeAtual(0),
    aberto(false)
{
}

Garrafa::Garrafa(float volumeMax, std::string cor) : 
    volumeMax(volumeMax),
    cor(cor),
    volumeAtual(0),
    aberto(false)
{
    verificaVolumeMax();
    verificaCor();
}

void Garrafa::verificaVolumeMax()
{
    if (volumeMax > 2000)
    {
        std::cout << "Volume maior que o máximo permitido, setando volume padrão 2000" << std::endl;
        volumeMax = 2000;
    }
    else if (volumeMax <= 0)
    {
        std::cout << "O volume não pode ser negativo, setando volume padrão 2000" << std::endl;
        volumeMax = 2000;
    }
}

void Garrafa::verificaCor()
{
    if (cor.empty())
    {
        std::cout << "A cor não pode ser vazia, setando cor padrão" << std::endl;
        cor = "Azul";
    }
}

std::string Garrafa::getCor()
{
    return cor;
}

float Garrafa::getVolumeAtual()
{
    return volumeAtual;
}

float Garrafa::getVolumeMax()
{
    return volumeMax;
}

bool Garrafa::getAberto()
{
    return aberto;
}

void Garrafa::tamparDestampar()
{
    aberto = !aberto;
}

void Garrafa::beber(float qnt)
{
    if (!aberto)
    {
        std::cout << "Garrafa está fechada." << std::endl;
        return;
    }
    if (qnt <= 0)
    {
        std::cout << "Consumo inválido, beba mais do que isso" << std::endl;
        return;
    }
    volumeAtual -= qnt;

    if (volumeAtual <= 0)
    {
        std::cout << "Você esvaziou a garrafa" << std::endl;
        volumeAtual = 0;
    }
}

void Garrafa::encher(float qnt)
{
    if (!aberto)
    {
        std::cout << "Garrafa está fechada." << std::endl;
        return;
    }
    if (qnt <= 0)
    {
        std::cout << "Tente encher alguma quantidade" << std::endl;
        return;
    }
    volumeAtual += qnt;
    if (volumeAtual > volumeMax)
    {
        std::cout << "Você encheu a garrafa" << std::endl;
        volumeAtual = volumeMax;
    }
}
