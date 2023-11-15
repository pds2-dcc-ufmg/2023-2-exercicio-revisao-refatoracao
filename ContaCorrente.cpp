#include "ContaCorrente.hpp"

void ContaCorrente::useOverdraft(double amount) {
    double totalAmount = getBalance() + overdraftLimit;
    if (amount > 0 && amount <= totalAmount) {
        setBalance(getBalance() - amount);
        std::cout << "Uso de cheque especial de R$" << amount << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}

double ContaCorrente::getOverdraftLimit() const {
    return overdraftLimit;
}

void ContaCorrente::setOverdraftLimit(double newLimit) {
    overdraftLimit = newLimit;
}
