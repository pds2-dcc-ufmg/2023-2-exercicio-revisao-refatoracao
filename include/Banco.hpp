#ifndef BANCO_H
#define BANCO_H

#include "ContaBancaria.hpp"

class Banco {
    private:
        std::vector<ContaBancaria*> contas;

    public:
        void adicionarConta(ContaBancaria* conta);
        void exibirTodasAsContas();
};

#endif