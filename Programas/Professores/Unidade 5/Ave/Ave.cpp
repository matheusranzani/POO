#include <iostream>
//Este � um exemplo de polimorfismo 

// Primeiramente se cria uma classe base
// Vamos imaginar a classe Ave
 
class Ave  // classe base
{
public:
   virtual void MostraNome() const
   {
      std::cout << "Sou uma ave";
   }
   virtual ~Ave() {}
};
 
// Criando a classe Cisne � partir da classe Ave
// Afinal de contas, Cisne � uma Ave

class Cisne: public Ave
{ 
public:
   void MostraNome() const
   {
      std::cout << "Sou um cisne";  //sobrecarrega a fun��o virtual
   }
};
 
int main()
{
   Ave *p_ave = new Cisne; // ponteiro para Ave aponta para Cisne!
                           // � poss�vel pois Cisne � uma Ave!

   p_ave->MostraNome();    // "Apresenta a mensage: Sou um cisne
 
   delete p_ave;
}