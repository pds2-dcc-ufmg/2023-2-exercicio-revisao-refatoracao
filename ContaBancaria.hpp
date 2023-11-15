// ContaBancaria.hpp

#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>

class ContaBancaria {
public:
    void deposit(double amount);

    void withdraw(double amount);

    std::string getHolder() const;

    double getBalance() const;

    void setHolder(const std::string& newHolder);

    void setBalance(double newBalance);

private:
    std::string holder;
    double balance;
};

#endif
