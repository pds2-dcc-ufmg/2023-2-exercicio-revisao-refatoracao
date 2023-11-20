#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "ContaBancaria.hpp"
#include <string>

class ContaCorrente : public ContaBancaria {
private:
    double _limiteChequeEspecial;
public:
    ContaCorrente();
    ContaCorrente(std::string, double, double);
    void usarChequeEspecial(double);
    double getLimiteChequeEspecial();
    void setLimiteChequeEspecial(double);
};


#endif