#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    private:
        double _limiteChequeEspecial;

    public:
        ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);  

        ~ContaCorrente();

        void usarChequeEspecial(double valor);

        double Get_limiteChequeEspecial ();

};


#endif