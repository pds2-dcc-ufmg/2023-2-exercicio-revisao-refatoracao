#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria 
{
private:  
	double limite_cheque_especial;

public:
	ContaCorrente(std::string titular, double saldo, double limite);
	~ContaCorrente();

	bool cheque_especial_permitido(double valor);
	void usar_cheque_especial(double valor);
};

#endif