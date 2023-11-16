#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {

private:
    std::string titular;
    double saldo;

public:
    double getSaldo();
    void setSaldo(double novo_saldo); //testar se chamar de qualquer lugar ele funciona
    std::string getTitular();
    void setTitular(std::string novoTitular);
    void depositar(double valor);
    void sacar(double valor); //identacao 
        
    
};

#endif
