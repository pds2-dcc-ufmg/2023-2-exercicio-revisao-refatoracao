#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
    private:
    double _taxaJuros;
    public:

        ContaPoupanca(std::string titular, double saldo, double taxaJuros) : 
        ContaBancaria(titular,saldo), _taxaJuros(taxaJuros/100){}

        void calcularJuros() {
            double juros = getSaldo() * getTaxaJuros();
            setSaldo(getSaldo() + juros);
            std::cout << "Juros de R$ " << juros << " calculados e adicionados à conta.\n";
        }

        double getTaxaJuros(){
            return this->_taxaJuros;
        }
};


#endif