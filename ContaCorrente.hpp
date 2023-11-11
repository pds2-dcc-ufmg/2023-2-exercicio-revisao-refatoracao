#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
private:
    double _limiteChequeEspecial;

public:
    ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial);
    void usarChequeEspecial(double valor);
    double getLimite() const;
    void setLimite(double limiteChequeEspecial);
};

#endif