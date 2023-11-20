#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    public:
        void usar_cheque_especial(double valor);
        ContaCorrente(std::string titular, double saldo, double lim);
        
    private:
        double limite_cheque_especial;
};


#endif