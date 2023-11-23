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
    void adicionarConta(ContaBancaria* conta);
    void exibir_todas_contas();
    ~Banco();
};

#endif
