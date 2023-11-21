#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

using namespace std;

class Banco {
    private:
        vector<ContaBancaria*> _contas;

    public:
        void adicionarConta(ContaBancaria* conta);
        void exibirTodasContas();

};

#endif