#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:
    ContaCorrente(const std::string& titular, double saldo, double limiteChequeEspecial);

    void usarChequeEspecial(double valor);
    double getLimiteChequeEspecial() const;
    void setLimiteChequeEspecial(double limite);

private:
    double limiteChequeEspecial_;
};

#endif
