#ifndef BANCO_H
#define BANCO_H

#include <vector>
#include "ContaBancaria.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

class Banco 
{
private:
	std::vector<ContaBancaria*> contas;

public:
  Banco();
  ~Banco();

  void adicionar_conta(ContaBancaria* conta);
  ContaCorrente* adicionar_conta_corrente(std::string titular, double saldo, double limite);
  ContaPoupanca* adicionar_conta_poupanca(std::string titular, double saldo, double juros);
  
  void exibir_todas_contas();
  void apagar_contas();
};

#endif

