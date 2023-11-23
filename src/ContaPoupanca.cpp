#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string titular, double saldo, double juros) :
ContaBancaria(titular, saldo), taxa_juros(juros)
{
	
}

ContaPoupanca::~ContaPoupanca()
{
	
}

void ContaPoupanca::calcular_juros() 
{
	double juros = this->saldo * this->taxa_juros / TRANSFORMACAO_PERCENTUAL;
  this->saldo += juros;
	std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}

