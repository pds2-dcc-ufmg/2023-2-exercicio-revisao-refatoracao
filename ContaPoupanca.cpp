#include "ContaPoupanca.hpp"

double ContaPoupanca ::getTaxaJuros() const { return this->_taxaJuros; }

ContaPoupanca ::ContaPoupanca(std::string titular, double saldo, double taxaJuros) : ContaBancaria(titular, saldo), _taxaJuros(taxaJuros) {}

void ContaPoupanca ::calcularJuros()
{
	double juros = this->getSaldo() * this->getTaxaJuros() / 100;
	this->setSaldo(this->getSaldo() + juros);
	std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}
