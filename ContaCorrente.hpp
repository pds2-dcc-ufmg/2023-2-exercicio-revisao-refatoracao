#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {
public:
    void useOverdraft(double amount);

    double getOverdraftLimit() const;

    void setOverdraftLimit(double newLimit);

private:
    double overdraftLimit;
};

#endif
