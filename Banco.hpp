#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

class Banco {
private:
    std::vector<ContaBancaria*> contas;
public:
    void adicionarConta(ContaBancaria* conta);
    void exibirTodasContas();
    ~Banco();
};

#endif
