#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

using namespace std;

class Banco {
public:
    void adicionarConta(ContaBancaria* conta);
    void exibirTodasContas();

private:
    std::vector<ContaBancaria*> contas;
};

#endif