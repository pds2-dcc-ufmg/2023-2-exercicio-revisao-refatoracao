#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
        double _taxaJuros;
        static double constexpr _KpercentageCorrector = 100.0;
    public:
        ContaPoupanca(std::string titular, double valor, double taxaJuros): ContaBancaria(titular, valor), _taxaJuros(taxaJuros){};
        void calcularJuros();
};


#endif