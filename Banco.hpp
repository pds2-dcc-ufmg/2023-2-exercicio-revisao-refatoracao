#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

class Banco {
private:
    std::vector<ContaBancaria*> contas; //Qual a melhor estrutura de dados?

public:
    std::vector<ContaBancaria*> getVectorContas();
    void adicionar_conta(ContaBancaria* conta);
    void exibir_todas_contas();
    ~Banco();
    
};

#endif