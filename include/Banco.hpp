#ifndef BANCO_H
#define BANCO_H

#include <vector>
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

class Banco {
private:
    std::vector<ContaBancaria *> _contas;

    void adicionar_conta(ContaBancaria * conta);

public:

    ~Banco();
    
    void adicionar_conta_corrente(std::string titular, double saldo, double limite);

    void adicionar_conta_poupanca(std::string titular, double saldo, double taxa);

    void exibir_todas_contas();

    void sacar(int id, double valor);

    void depositar(int id, double valor);

    ContaBancaria*  get_conta(int id);
};

#endif