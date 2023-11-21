#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
private:
double limiteChequeEspecial;
public:
ContaCorrente(std::string _titular, double _saldo,double limite);
void usarChequeEspecial(double valor);
double getLimiteChequeEspecial();
~ContaCorrente();
};


#endif