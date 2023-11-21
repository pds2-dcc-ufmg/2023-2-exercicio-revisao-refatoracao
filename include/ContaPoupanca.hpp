#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
        double _taxa_juros;
        double calcularValorJuros();


    public:
        void calcularJuros();
        
};


#endif