#include "Banco.hpp"
#include <iostream>


ContaCorrente* Banco::adicionarContaCorrente(std::string titular, double saldo, double limiteChequeEspecial) {

      ContaCorrente *conta = new ContaCorrente(titular, saldo, limiteChequeEspecial);
      contas.push_back(conta);

      return conta;
}

ContaPoupanca* Banco::adicionarContaPoupanca(std::string titular, double saldo, double taxaJuros) {

      ContaPoupanca *conta = new ContaPoupanca(titular, saldo, taxaJuros);
      contas.push_back(conta);

      return conta;
}

void Banco::exibir_todas_contas() {

      for (ContaBancaria* conta : contas) {
            std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
      }
}

Banco::~Banco() {

      for (ContaBancaria* conta : contas) {
            delete conta;
      }
}
