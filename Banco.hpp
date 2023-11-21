#ifndef BANCO_H
#define BANCO_H

#include "ContaBancaria.hpp"

class Banco {
private:
    std::vector<ContaBancaria*> _contas;

public:
    Banco();

    void adicionarConta(ContaBancaria* conta);

    void exibirTodasContas();

    void sacarConta(int conta, double valor);

    void chequeConta(int conta, double valor);

    void jurosConta(int conta);

    void depositarConta(int conta, double valor);

};

#endif