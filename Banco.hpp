// Banco.hpp

#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

class Banco {
public:
    void addAccount(ContaBancaria* account);

    void displayAllAccounts();

private:
    std::vector<ContaBancaria*> accounts;
};

#endif
