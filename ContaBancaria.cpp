#include "ContaBancaria.hpp"

ContaBancaria ::ContaBancaria(std::string titular, double saldo) : _titular(titular), _saldo(saldo) {}

double ContaBancaria ::getSaldo() const { return this->_saldo; }

std::string ContaBancaria ::getTitular() const { return this->_titular; }

void ContaBancaria ::setSaldo(double valor) { this->_saldo = valor; }

void ContaBancaria ::depositar(double valor)
{
	if (valor > 0)
	{
		this->setSaldo(this->getSaldo() + valor);
		std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
	}
	else
	{
		std::cout << "Valor de depósito inválido.\n";
	}
}

void ContaBancaria ::sacar(double valor)
{
	if (valor > 0 && valor <= this->getSaldo())
	{
		this->setSaldo(this->getSaldo() - valor);
		std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
	}
	else
	{
		std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
	}
}
