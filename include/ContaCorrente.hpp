#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    private:
        double _limite_cheque_especial;
        bool checarLimiteSuficiente(double valor);


    public:
        ContaCorrente(std::string &titular, double saldo, double limite_cheque_especial);
        void usarChequeEspecial(double valor);
        
};


#endif