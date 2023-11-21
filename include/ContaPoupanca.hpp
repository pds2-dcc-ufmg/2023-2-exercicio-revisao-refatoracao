#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
        static double constexpr _PROPORCAO_PERCENTUAL_DECIMAL = 100;
        double _taxa_juros;
        double calcularValorJuros();


    public:
        ContaPoupanca(std::string titular, double saldo, double taxa_juros);
        void calcularJuros();
        
};


#endif