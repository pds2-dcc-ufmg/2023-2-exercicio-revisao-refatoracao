#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {

private:
    double limiteChequeEspecial;

public:
    void setLimiteChequeEspecial(double limite_cheque_especial);
    double getLimiteChequeEspecial();
    void usarChequeEspecial(double valor);
};

#endif