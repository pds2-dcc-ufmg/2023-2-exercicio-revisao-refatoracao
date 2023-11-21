#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
private:
    double limite_cheque_especial;

public:
    ContaCorrente(std::string titular, double saldo, double limite_cheque_especial);

    void usar_cheque_especial(double valor);


  double get_limite_cheque_especial() const;
  void set_limite_cheque_especial(double limite_cheque_especial);

};
#endif
