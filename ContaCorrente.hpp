#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria
{

public:
    ContaCorrente(std::string titular,double valor,double limite);
    void usarChequeEspecial(double valor);
    double getLimiteChequeEspecial();

private:
    double _limiteChequeEspecial;
};

#endif