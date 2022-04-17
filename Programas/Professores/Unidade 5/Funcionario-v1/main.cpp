#include "Medico.h"
#include "Enfermeiro.h"
#include <stack>

int main() {
  
    Funcionario* f1 = new Enfermeiro(67890, "Nurse Beth", 12345);
    f1->imprime();
    
    cout << endl;

    Funcionario* f2 = new Medico(12345, "Dr. House", "Neurologista");
    f2->imprime();

    Enfermeiro* e1 = dynamic_cast<Enfermeiro*>(f1);

    cout << endl;
    
    if (e1 != nullptr) {
        cout << "Casting realizado com sucesso!!" << endl;
        cout << "(" << e1->getProfissao() << ") CRE: " << e1->getCRE() << endl;
    } else {
        cout << "Casting sem sucesso!!" << endl;
    }

    Medico* m1 = dynamic_cast<Medico*>(f1);

    cout << endl;
    
    if (m1 != nullptr) {
        cout << "Casting realizado com sucesso!!" << endl;
        cout << "(" << m1->getProfissao() << ") Especialidade: " << m1->getEspecialidade() << endl;
    } else {
        cout << "Casting sem sucesso!!" << endl;
    }

    Enfermeiro* e2 = dynamic_cast<Enfermeiro*>(f2);

    cout << endl;
    
    if (e2 != nullptr) {
        cout << "Casting realizado com sucesso!!" << endl;
        cout << "(" << e2->getProfissao() << ") CRE: " << e2->getCRE() << endl;
    } else {
        cout << "Casting sem sucesso!!" << endl;
    }

    Medico* m2 = dynamic_cast<Medico*>(f2);

    cout << endl;
    
    if (m2 != nullptr) {
        cout << "Casting realizado com sucesso!!" << endl;
        cout << "(" << m2->getProfissao() << ") Especialidade: " << m2->getEspecialidade() << endl;
    } else {
        cout << "Casting sem sucesso!!" << endl;
    }
    
    return 0;
}

