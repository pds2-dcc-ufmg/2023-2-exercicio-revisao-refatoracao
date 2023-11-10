#ifndef BANCO_H
#define BANCO_H

#include "ContaBancaria.hpp"


class Banco {
    private:
        std::vector<ContaBancaria*> _contas;

    public:
        void adicionarConta(ContaBancaria &conta);

        void exibirTodasContas();

};

#endif