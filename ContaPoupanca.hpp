#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include <iostream>
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
public:
    void calculateInterest();

    double getInterestRate() const;

    void setInterestRate(double newRate);

private:
    double interestRate;
};

#endif
