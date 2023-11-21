#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:
    void usarChequeEspecial(double valor);
    void setLimiteChequeEspecial(double limite);

private:
    double _limiteChequeEspecial;
};

#endif
