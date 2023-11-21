#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
private:
     double taxaJuros;
     double juros;
public:
     ContaPoupanca(std::string _titular, double _saldo,double _taxaJuros);
     void setJuros();
     void calcularJuros();
     double getTaxaJuros();
     ~ContaPoupanca();
};


#endif