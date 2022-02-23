#include <iostream>
#include "Garrafa.h"

using namespace std;

void atualizaStatus(Garrafa& garrafa) {
  cout << "Vol max: " << garrafa.getVolumeMax() << endl;
  cout << "Vol atual: " << garrafa.getVolumeAtual() << endl;
  cout << "Aberto: " << garrafa.getAberto() << endl;
  cout << "Cor: " << garrafa.getCor() << endl << endl;
}

int main(){
    float volumeMax;
    string cor;

    cout << "Entre com o volume max da garrafa (Max: 2000): " << endl;
    cin >> volumeMax;
    cout << "Entre com a cor da garrafa: " << endl;
    cin >> cor;
    
    Garrafa garrafa = Garrafa(volumeMax, cor);

    atualizaStatus(garrafa);

    float querTomar;
    float querEncher;
    int querGelada;
    int querAbrir;

    cout << "Quer abrir a sua nova garrafa? (1-Sim 0-Não)" << endl;
    cin >> querAbrir;
    if(querAbrir) {
        garrafa.tamparDestampar();
    }
    atualizaStatus(garrafa);

    cout << "Insira o quanto você quer encher (em Ml): " << endl;
    cin >> querEncher;

    garrafa.encher(querEncher);

    atualizaStatus(garrafa);

    cout << "Insira o quanto você vai beber (em Ml): " << endl;
    cin >> querTomar;

    garrafa.beber(querTomar);
    cout << "Bebendo..." << endl;

    atualizaStatus(garrafa);

    return 0;
}
