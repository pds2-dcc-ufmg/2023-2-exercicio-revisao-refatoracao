#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


int main() {
    Banco meuBanco;

    ContaCorrente* conta1 = new ContaCorrente("Joao", 1500, 200);
    ContaPoupanca* conta2 = new ContaPoupanca("Maria", 1000, 2.0);
    ContaPoupanca* conta3 = new ContaPoupanca("Luiz", 3000, 1.5);
    ContaPoupanca* conta4 = new ContaPoupanca("Lara", 2000, 2.5);
    ContaCorrente* conta5 = new ContaCorrente("Luisa", 5000, 300);

    meuBanco.adicionar_conta(conta1);
    meuBanco.adicionar_conta(conta2);
    meuBanco.adicionar_conta(conta3);
    meuBanco.adicionar_conta(conta4);
    meuBanco.adicionar_conta(conta5);

    meuBanco.exibir_todas_contas();

    conta1->depositar(500);
    conta2->sacar(200);
    conta3->sacar(100);
    conta4->depositar(-1);
    conta5->sacar(5001);

    meuBanco.exibir_todas_contas();

    conta1->sacar(500);
    conta2->depositar(200);
    conta3->depositar(100);
    conta4->sacar(300);
    conta5->depositar(50);

    meuBanco.exibir_todas_contas();

    conta1->usar_cheque_especial(500);
    conta2->calcular_juros();
    conta3->calcular_juros();
    conta4->calcular_juros();
    conta5->usar_cheque_especial(50);
    
    meuBanco.exibir_todas_contas();

    return 0;
}
