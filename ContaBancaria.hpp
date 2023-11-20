#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <string>
class ContaBancaria {
private:
    std::string _titular;
    double _saldo;

public:
    ContaBancaria();
    ContaBancaria(std::string, double);
    void depositar(double);
    void sacar(double);
    void printInfo();
    std::string getTitular();
    double getSaldo();
    void setSaldo(double valor);
    void setTitular(std::string);
};

#endif
