#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"


class Banco {
public:
    void adicionarConta(ContaBancaria* conta);
    virtual ~Banco();
    void exibirTodasContas();
    ContaPoupanca* adicionarContaPoupanca(std::string titular, double saldo, double taxaJuros);
    ContaCorrente* adicionarContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);


private:
    std::vector<ContaBancaria*> _contas;
};

#endif