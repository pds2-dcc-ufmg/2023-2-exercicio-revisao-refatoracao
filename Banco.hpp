#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"


class Banco {
public:
    void addConta(ContaBancaria* conta);
    virtual ~Banco();
    void exibirTodasContas();
    ContaPoupanca* addContaPoupanca(std::string titular, double saldo, double taxaJuros);
    ContaCorrente* addContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);


private:
    std::vector<ContaBancaria*> _contas;
};

#endif