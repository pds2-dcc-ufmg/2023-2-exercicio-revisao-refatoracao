#include "ContaBancaria.hpp"

#ifndef BANCO_H
#define BANCO_H

class Banco {
    std::vector<ContaBancaria*> _contas;

public:
    void adicionarConta(ContaBancaria* conta);
    void exibirTodasContas();
    ~Banco();
};

#endif