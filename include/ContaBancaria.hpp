#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>

class ContaBancaria 
{
protected:  
  std::string titular;
  double saldo;

public:
  ContaBancaria(std::string titular, double saldo);
	virtual ~ContaBancaria();

	std::string get_titular();
	double get_saldo();

	void depositar(double valor); 
	void sacar(double valor);
};

#endif
