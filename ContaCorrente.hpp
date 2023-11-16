#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class conta_corrente : public ContaBancaria
{
private:
    double _limiteChequeEspecial;

public:
    conta_corrente(std::string titular, double saldo, double limiteChequeEspecial);
    double getLimiteChequeEspecial() const;

    void usarChequeEspecial(double valor);
};

#endif