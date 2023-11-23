#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"
#include <string>

// saldo = saldo - valor

class ContaCorrente : public ContaBancaria {
private:
     double _limiteChequeEspecial;
public:
    ContaCorrente(std::string, double, double);
    ContaCorrente();
    void usarChequeEspecial(double valor);
    ~ContaCorrente();

    void setLimiteChequeEspecial(double limiteChequeEspecial);

    double getLimiteChequeEspecial();

};

#endif