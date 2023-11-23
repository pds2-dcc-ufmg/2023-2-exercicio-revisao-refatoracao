#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#define TRANSFORMACAO_PERCENTUAL 100

#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria 
{
private:
	double taxa_juros;

public:
	ContaPoupanca(std::string titular, double saldo, double juros);
	~ContaPoupanca();
	
	void calcular_juros();
};

#endif