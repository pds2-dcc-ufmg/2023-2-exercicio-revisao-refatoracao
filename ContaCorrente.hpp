#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {

private:
    double limiteChequeEspecial;

public: 
    ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);
    
    void usarChequeEspecial(double valor);
};


#endif