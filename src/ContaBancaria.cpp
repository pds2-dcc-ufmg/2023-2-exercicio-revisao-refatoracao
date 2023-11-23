#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string titular, double saldo) : titular(titular), saldo(saldo)
{

}

ContaBancaria::~ContaBancaria()
{

}

void ContaBancaria::depositar(double valor) 
{
  if (valor > 0) 
  {
    this->saldo += valor;
    std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
  } 
    
  else 
  {
    std::cout << "Valor de depósito inválido.\n";
  }
}

void ContaBancaria::sacar(double valor) 
{
  if (valor > 0 && valor <= saldo) 
  {
    this->saldo -= valor;
    std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
  } 
  
  else 
  {
    std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
  }
}

std::string ContaBancaria::get_titular()
{
  return this->titular;
}

double ContaBancaria::get_saldo()
{
  return this->saldo;
}
