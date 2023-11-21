#ifndef BANCO_H
#define BANCO_H

#include <vector>
#include "ContaBancaria.hpp"

class Banco {
private:
    std::vector<ContaBancaria*> _contas;
public:
    void adicionarConta(ContaBancaria*);
    std::vector<ContaBancaria*> getContas() const;
    void exibir_todas_contas() const;
    ~Banco();
};

#endif