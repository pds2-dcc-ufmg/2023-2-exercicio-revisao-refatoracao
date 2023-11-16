#include "ContaPoupanca.hpp"

double conta_poupanca ::getTaxaJuros() const { return this->_taxaJuros; }

conta_poupanca ::conta_poupanca(std::string titular, double saldo, double taxaJuros) : ContaBancaria(titular, saldo), _taxaJuros(taxaJuros) {}

void conta_poupanca ::calcularJuros()
{
	double juros = this->getSaldo() * this->getTaxaJuros() / 100;
	this->setSaldo(this->getSaldo() + juros);
	std::cout << "Juros de R$" << juros << " calculados e adicionados à conta.\n";
}
