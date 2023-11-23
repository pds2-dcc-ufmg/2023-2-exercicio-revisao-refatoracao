#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limite) 
: ContaBancaria(titular, saldo), limite_cheque_especial(limite)
{

}
ContaCorrente::~ContaCorrente()
{

}

bool ContaCorrente::cheque_especial_permitido(double valor)
{
	return valor > 0 && valor <= this->saldo + this->limite_cheque_especial;
}

void ContaCorrente::usar_cheque_especial(double valor) 
{
	if (this->cheque_especial_permitido(valor)) 
	{
		this->saldo -= valor;
		std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
	} 
	
	else 
	{
		std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
	}
}