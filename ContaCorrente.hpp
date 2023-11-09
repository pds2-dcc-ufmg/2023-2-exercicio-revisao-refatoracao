#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
private:
    double limiteChequeEspecial;
public:
    void usarChequeEspecial(double valor);
    double getLimiteChequeEspecial() const;
    void setLimiteChequeEspecial(double novoLimiteChequeEspecial);
};

#endif