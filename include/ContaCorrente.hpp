#ifndef CONTA_CORRENTE_HPP
#define CONTA_CORRENTE_HPP

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
private:
    double _limiteChequeEspecial;
public:
    ContaCorrente(const std::string& titular, double saldo, double limiteChequeEspecial);
    ~ContaCorrente();

    void usarChequeEspecial(double valor);
    double get_limiteChequeEspecial() const;
    void set_limiteChequeEspecial(double limiteChequeEspecial);
};

#endif // CONTA_CORRENTE_HPP