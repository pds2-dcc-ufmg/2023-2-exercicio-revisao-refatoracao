#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    private:
        double _limiteChequeEspecial;
        double _limiteDisponivel;
        
    public:
        void usarChequeEspecial(double valor);
        void setLimiteChequeEspecial(double valor);
        void verificarLimiteDisponivel();
        double getLimiteChequeEspecial();
        ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);

};

#endif