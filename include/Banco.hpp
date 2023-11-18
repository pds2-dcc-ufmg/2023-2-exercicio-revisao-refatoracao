#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

using namespace std;

class Banco {
    private:
        std::vector<ContaBancaria*> contas;
    public:
        ~Banco();
        void adicionarConta(ContaBancaria* conta);
        void exibirTodasContas();
};

#endif