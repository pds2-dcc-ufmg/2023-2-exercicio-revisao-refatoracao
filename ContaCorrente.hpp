#ifndef ContaCorrente_H
#define ContaCorrente_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:
    ContaCorrente(const std::string &titular, double saldo, double limiteChequeEspecial);
    virtual ~ContaCorrente() {};
    void usarChequeEspecial(double valor);
    double getLimiteChequeEspecial() const;
    void setLimiteChequeEspecial(double limite);

private:
    double limiteChequeEspecial;
};

#endif