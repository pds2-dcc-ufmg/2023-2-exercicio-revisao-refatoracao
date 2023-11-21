#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:

    ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);

    void usarChequeEspecial(double valor);
    double getLimiteChequeEspecial() const;

private:

    double limiteChequeEspecial;
};

#endif
