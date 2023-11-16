#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {

private:
    double limiteChequeEspecial;

public:
    void usar_cheque_especial(double valor);
    double getLimiteChequeEspecial();
    void setLimiteChequeEspecial(double novoLimite);
};


#endif