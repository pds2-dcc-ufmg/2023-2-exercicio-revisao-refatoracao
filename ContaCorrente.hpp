#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:
ContaCorrente(std::string _titular, double _saldo, double _limiteChequeEspecial);
void usar_cheque_especial(double valor);

private:
double limiteChequeEspecial;
};


#endif