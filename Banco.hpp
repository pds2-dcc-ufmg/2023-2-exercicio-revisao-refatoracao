#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"

class Banco {
private:
    std::vector<ContaBancaria*> contas;

public:
    ContaPoupanca* adicionar_conta_poupanca(std::string titular, double saldo, double taxa_juros);
    ContaCorrente* adicionar_conta_corrente(std::string titular, double saldo, double limite_cheque_especial);
    
    void exibir_todas_contas();

    ~Banco();
};

#endif