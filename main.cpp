#include <iostream>
#include "Banco.hpp"
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"

int main() {
    Banco myBank;

    // Creating and adding accounts
    ContaCorrente* account1 = new ContaCorrente();
    account1->setHolder("Joao");
    account1->setBalance(1500);
    account1->setOverdraftLimit(200);
    myBank.addAccount(account1);

    ContaPoupanca* account2 = new ContaPoupanca();
    account2->setHolder("Maria");
    account2->setBalance(1000);
    account2->setInterestRate(2.0);
    myBank.addAccount(account2);

    ContaPoupanca* account3 = new ContaPoupanca();
    account3->setHolder("Luiz");
    account3->setBalance(3000);
    account3->setInterestRate(1.5);
    myBank.addAccount(account3);

    ContaPoupanca* account4 = new ContaPoupanca();
    account4->setHolder("Lara");
    account4->setBalance(2000);
    account4->setInterestRate(2.5);
    myBank.addAccount(account4);

    ContaCorrente* account5 = new ContaCorrente();
    account5->setHolder("Luisa");
    account5->setBalance(5000);
    account5->setOverdraftLimit(300);
    myBank.addAccount(account5);

    // Displaying all accounts and performing operations on them
    myBank.displayAllAccounts();
    
    account1->deposit(500);
    account2->withdraw(200);
    account3->withdraw(100);
    account4->deposit(-1);
    account5->withdraw(5001);

    myBank.displayAllAccounts();

    account1->withdraw(500);
    account2->deposit(200);
    account3->deposit(100);
    account4->withdraw(300);
    account5->deposit(50);

    myBank.displayAllAccounts();

    account1->useOverdraft(500);
    account2->calculateInterest();
    account3->calculateInterest();
    account4->calculateInterest();
    account5->useOverdraft(50);

    myBank.displayAllAccounts();

    return 0;
}
