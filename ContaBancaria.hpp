#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {
    private:
        std::string _titular;
        double _saldo;
        static double constexpr _KlowestValue = 0.0;
    
    public:
        ContaBancaria(std::string titular, double saldo): _titular(titular), _saldo(saldo) {};
        std::string getTitular();
        double getSaldo();
        bool isPositive(double num);
        bool isWithinSaldoLim(double valor);
        void depositar(double valor);
        void sacar(double valor);
    protected:
        void aumentarSaldo(double valor);
        void diminuirSaldo(double valor);

};

#endif
