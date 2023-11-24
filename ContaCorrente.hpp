#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
private:
    double valorTotal;
    double limiteChequeEspecial;
public:
    void setValorTotal();
    ContaCorrente(std::string _titular, double _saldo,double _limiteChequeEspecial);
    void usarChequeEspecial(double valor);
    double getLimiteChequeEspecial();
    ~ContaCorrente();
};


#endif