#include "ContaBancaria.hpp"

#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

class ContaCorrente : public ContaBancaria {
    double _limiteChequeEspecial;

public:
    ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);

    ~ContaCorrente();

    void usarChequeEspecial(double valor);
};

#endif