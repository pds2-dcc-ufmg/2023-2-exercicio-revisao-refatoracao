#include "ContaCorrente.hpp"

ContaCorrente ::ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial) : ContaBancaria(titular, saldo), _limiteChequeEspecial(limiteChequeEspecial) {}

double ContaCorrente ::getLimiteChequeEspecial() const { return this->_limiteChequeEspecial; }

void ContaCorrente ::usarChequeEspecial(double valor)
{
	double valorTotal = this->getSaldo() + _limiteChequeEspecial;
	if (valor > 0 && valor <= valorTotal)
	{
		this->setSaldo(this->getSaldo() - valor);
		std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
	}
	else
	{
		std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
	}
}