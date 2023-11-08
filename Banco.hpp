#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

using namespace std;

class Banco {
    private:
        std::vector<ContaBancaria*> _contas;
        //teste commit

    public: 
        Banco(std::vector<ContaBancaria*> _contas) {}
        void adicionarConta(ContaBancaria* conta);
    
        void exibir_todas_contas();

};

#endif
