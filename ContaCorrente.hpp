#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:
    void usarChequeEspecial(double valor);
    double getLimiteChequeEspecial() const;
    void setLimiteChequeEspecial(double limiteChequeEspecial);

private:
    double limiteChequeEspecial;
};


#endif