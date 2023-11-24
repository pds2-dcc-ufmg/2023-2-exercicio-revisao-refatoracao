#ifndef CONTA_POUPANCA_HPP
#define CONTA_POUPANCA_HPP

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria {
private:
    double _taxaJuros;
public:
    ContaPoupanca(const std::string& titular, double saldo, double taxaJuros);
    ~ContaPoupanca();

    void calcularJuros();
    double get_taxaJuros() const;
    void set_taxaJuros(double taxaJuros);
};

#endif // CONTA_POUPANCA_HPP