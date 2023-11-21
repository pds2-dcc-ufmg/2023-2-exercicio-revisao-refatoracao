#ifndef BANCO_H
#define BANCO_H
#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

class Banco {

private:
    std::vector<ContaBancaria *> contas;

public:
    void adicionar_conta(ContaBancaria *conta);
    void exibir_todas_contas();

};
#endif