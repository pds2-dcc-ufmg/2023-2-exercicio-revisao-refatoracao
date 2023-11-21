#ifndef BANCO_H
#define BANCO_H

#include <vector>
#include "ContaBancaria.hpp"

class Banco {
public:

    void adicionarConta(ContaBancaria* conta);
    void exibirTodasContas() const;

private:

    std::vector<ContaBancaria*> contas;
    
};

#endif
