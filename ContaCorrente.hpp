#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
    private:
        double limiteChequeEspecial;
    public:
        ContaCorrente();
        double get_limite_cheque_especial();
        void set_limite_cheque_especial(double limiteChequeEspecial);
        void usar_cheque_especial(double valorRequisitado);
};

#endif