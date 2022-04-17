#include <iostream>

int main() {
    float Q1, Q2;
    float G1, G2, G3, G4;
    float P1, P2;

    std::cout << "Q1 e Q2: ";
    std::cin >> Q1 >> Q2;
    std::cout << "G1, G2, G3 e G4: ";
    std::cin >> G1 >> G2 >> G3 >> G4;
    std::cout << "P1 e P2: ";
    std::cin >> P1 >> P2;

    float media = (Q1 + Q2 + 2 * G1 + 2 * G2 + 2 * G3 + 2 * G4 + 3 * P1 + 3 * P2) / 16;

    std::cout << "Media = " << media << std::endl;
    
    return 0;
}
