#pragma once

#include <iostream> 

class Garrafa {
private:
    float volumeMax;
    std::string cor;
    bool aberto;
    float volumeAtual;

public:
    Garrafa();
    Garrafa(float volumeMax, std::string cor);

    float getVolumeMax();
    float getVolumeAtual();
    std::string getCor();
    bool getAberto();
    
    void tamparDestampar();
    void beber(float qnt);
    void encher(float qnt);

private: 
    void verificaVolumeMax();
    void verificaCor();
};