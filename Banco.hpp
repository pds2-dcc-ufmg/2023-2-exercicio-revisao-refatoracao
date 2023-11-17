#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupança.hpp"

class Banco {
private:
std::vector<ContaBancaria*> contas;
public:
ContaCorrente* adicionarContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);
ContaPoupanca* adicionarContaPoupanca(std::string titular, double saldo, double taxaJuros);
void exibir_todas_contas();
~Banco()
};

#endif
