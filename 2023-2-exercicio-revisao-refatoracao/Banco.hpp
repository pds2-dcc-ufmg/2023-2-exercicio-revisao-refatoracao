#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

class Banco {
private:
    std::vector<ContaBancaria*> _contas;

public:
    ContaCorrente* adicionar_conta_corrente(std::string titular, double saldo, double limite_cheque_especial);
    ContaPoupanca* adicionar_conta_poupanca(std::string titular, double saldo, double taxa_juros);
    void exibir_todas_contas();

};

#endif