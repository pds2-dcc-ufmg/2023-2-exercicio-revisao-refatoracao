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
        std::vector<ContaBancaria*> get_contas();
        void set_contas(std::vector<ContaBancaria*> contas);
        void adicionar_conta(ContaBancaria* conta);
        void exibir_todas_contas();
};

#endif