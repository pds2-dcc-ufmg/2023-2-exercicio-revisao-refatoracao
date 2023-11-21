#ifndef CONTA_CORRENTE_HPP
#define CONTA_CORRENTE_HPP

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
private:
    double _limiteChequeEspecial;
public:
    ContaCorrente::ContaCorrente(const std::string& titular, double saldo, double limiteChequeEspecial);
    ContaCorrente::~ContaCorrente();

    void usarChequeEspecial(double valor);
    double get_limiteChequeEspecial() const;
    void set_limiteChequeEspecial(double limiteChequeEspecial);
};

#endif // CONTA_CORRENTE_HPP