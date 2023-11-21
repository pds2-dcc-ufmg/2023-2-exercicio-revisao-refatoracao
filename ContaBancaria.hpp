#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <iostream>
#include <string>
#include <vector>

class ContaBancaria {

    //Change: deixar os atributos privados
    private:
		std::string titular;
		double saldo;

    public:
		
		//Change: Metodo Construtor
		ContaBancaria(std::string titular, double saldo);

		//Change Metodos para retornar e atualizar o valor
		double getSaldo();
		void setSaldo(double valor);

		// Change: Metodo para imprimir
		virtual void printInfo();

		void depositar(double valor);
		void sacar(double valor);

};

#endif
