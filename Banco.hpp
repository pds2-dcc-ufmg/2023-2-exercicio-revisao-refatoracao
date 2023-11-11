#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"

class Banco {
private:
    std::vector<ContaBancaria *> contas;

public:
    ContaPoupanca* adicionarContaPoupanca(std::string titular, double saldo, double taxaJuros);
    ContaCorrente* adicionarContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);
    void exibirTodasContas();
    ~Banco();
};

#endif