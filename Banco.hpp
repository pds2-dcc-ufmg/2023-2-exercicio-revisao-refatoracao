#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

using namespace std;

class Banco {
    public:
        void adicionar_conta(ContaBancaria* conta);
        void exibir_todas_contas();
        ~Banco();

    private:
        std::vector<ContaBancaria*> contas;
};

#endif