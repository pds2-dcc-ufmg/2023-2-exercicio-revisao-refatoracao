#include "ContaPoupanca.hpp"

void ContaPoupanca::calculateInterest() {
    double interest = getBalance() * interestRate / 100;
    setBalance(getBalance() + interest);
    std::cout << "Juros de R$" << interest << " calculados e adicionados à conta.\n";
}

double ContaPoupanca::getInterestRate() const {
    return interestRate;
}

void ContaPoupanca::setInterestRate(double newRate) {
    interestRate = newRate;
}