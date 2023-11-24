#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:
    ContaCorrente(const std::string& titular, double saldoInicial, double limiteCheque);

    void usarChequeEspecial(double valor);

private:
    double limiteChequeEspecial;
};

#endif