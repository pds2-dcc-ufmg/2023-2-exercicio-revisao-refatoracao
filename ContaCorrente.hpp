#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    private: 
        double _limChequeEspecial;

    public:
        ContaCorrente(std::string titular, double saldo, double limChequeEspecial): ContaBancaria(titular, saldo), _limChequeEspecial(limChequeEspecial){};
        void usarChequeEspecial(double valor);
        
};


#endif