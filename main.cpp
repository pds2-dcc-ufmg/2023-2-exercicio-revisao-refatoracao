#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"

int main() {
Banco* _Banco = new Banco;
std::vector<ContaBancaria*> contas;

contas.push_back(_Banco->addContaCorrente("Joao", 1500, 200));
contas.push_back(_Banco->addContaPoupanca("Maria", 1000, 2.0));
contas.push_back(_Banco->addContaPoupanca("Luiz", 3000, 1.5));
contas.push_back(_Banco->addContaPoupanca("Lara", 2000, 2.5));
contas.push_back(_Banco->addContaCorrente("Luisa", 5000, 300));

_Banco->exibirTodasContas();

contas[0]->depositar(500);
contas[1]->sacar(200);
contas[2]->sacar(100);
contas[3]->depositar(-1);
contas[4]->sacar(5001);

_Banco->exibirTodasContas();

contas[0]->sacar(500);
contas[1]->depositar(200);
contas[2]->depositar(100);
contas[3]->sacar(300);
contas[4]->depositar(50);

_Banco->exibirTodasContas();

dynamic_cast<ContaCorrente*>(contas[0])->usarChequeEspecial(500);
dynamic_cast<ContaPoupanca*>(contas[1])->adicionarJuros();
dynamic_cast<ContaPoupanca*>(contas[2])->adicionarJuros();
dynamic_cast<ContaPoupanca*>(contas[3])->adicionarJuros();
dynamic_cast<ContaCorrente*>(contas[4])->usarChequeEspecial(50);

_Banco->exibirTodasContas();

delete _Banco;

return 0;
}

