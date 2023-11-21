#ifndef CONTA_BANCARIA_HPP
#define CONTA_BANCARIA_HPP

#include <iostream>
#include <vector>

class ContaBancaria {
private:
    std::string _titular;
    double _saldo;
public:
    ContaBancaria(const std::string& titular, double saldo);
    ~ContaBancaria();

    void depositar(double valor);
    void sacar(double valor);
    std::string get_titular() const;
    void set_titular(std::string nome);
    double get_saldo() const;
    void set_saldo(double valor);
    void alterar_saldo(double valor);
};

#endif // CONTA_BANCARIA_HPP