#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

namespace poo {
    class Professor : public Pessoa {
        private:
            std::string universidade;
        
        public:
            Professor(std::string, std::string, std::string);
            ~Professor();

            std::string getUniversidade() const;

            friend std::ostream& operator<<(std::ostream&, Professor&);
    };
}

#endif
