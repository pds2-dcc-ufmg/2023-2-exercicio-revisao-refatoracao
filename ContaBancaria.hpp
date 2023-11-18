#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {

    //Change atributos privados
    private:
	std::string titular;
	double saldo;

    public:
	
	//Change Metodo Construtor
	ContaBancaria(std::string titular, double saldo);
	
	//Change Metodo para atualizar o valor
	void setSaldo(double valor);

	// Change: Metodo para imprimir
	void printInfo();

	void depositar(double valor);

    	void sacar(double valor);

};

#endif
