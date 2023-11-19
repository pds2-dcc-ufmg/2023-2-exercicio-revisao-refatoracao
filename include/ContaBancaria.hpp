#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
private:
    std::string _titular;
    double _saldo;

public:
    ContaBancaria(std::string titular, double saldo);
    void depositar(double valor);
    void sacar(double valor);
    double get_saldo();
    std::string get_titular();
    void set_saldo(double valor);
    void set_titular(std::string titular);
};

#endif

//chave a mais
//private std::string titular; double saldo;
//Sacar: identacao
//espaco a mais
//endl
//get e set