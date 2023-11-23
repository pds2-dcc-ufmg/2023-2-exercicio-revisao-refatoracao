#include "Banco.hpp"

Banco::Banco()
{

}

Banco::~Banco()
{

}

void Banco::adicionar_conta(ContaBancaria* conta) 
{
  contas.push_back(conta);
}
    
void Banco::exibir_todas_contas()
{   
  for (const auto& conta : this->contas) 
	{
    std::cout << "Saldo da conta de " << conta->get_titular() << ": R$" << conta->get_saldo() << "\n";  
  }  
}

void Banco::apagar_contas()
{
	for(auto conta : this->contas)
  {
    delete conta;
  }
}

ContaCorrente* Banco::adicionar_conta_corrente(std::string titular, double saldo, double limite)
{
  ContaCorrente* conta = new ContaCorrente(titular, saldo, limite);
  this->adicionar_conta(conta);
  
  return conta;
}

ContaPoupanca* Banco::adicionar_conta_poupanca(std::string titular, double saldo, double juros)
{
  ContaPoupanca* conta = new ContaPoupanca(titular, saldo, juros);
  this->adicionar_conta(conta);
  
  return conta;
}