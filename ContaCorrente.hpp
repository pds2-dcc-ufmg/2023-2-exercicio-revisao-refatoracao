#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include <string>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {

    //change: deixar o atributo privado
    private:
        double limiteChequeEspecial;

    public:
        ContaCorrente(std::string titular, double saldo, double lce):ContaBancaria(titular,saldo), limiteChequeEspecial(lce){};
        void usarChequeEspecial(double valor);

};


#endif