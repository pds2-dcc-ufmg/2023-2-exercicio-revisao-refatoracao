// Banco.cpp

#include "Banco.hpp"

void Banco::addAccount(ContaBancaria* account) {
    accounts.push_back(account);
}

void Banco::displayAllAccounts() {
    for (ContaBancaria* account : accounts) {
        std::cout << "Saldo da conta de " << account->getHolder() << ": R$" << account->getBalance() << "\n";
    }
}
