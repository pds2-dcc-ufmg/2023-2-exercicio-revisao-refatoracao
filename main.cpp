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
    ContaPoupanca* c;
    ContaPoupanca* conta2 = new ContaPoupanca();
    conta2->setTitular("Maria");  
    conta2->setSaldo(1000);
    conta2-> setTaxaJuros(2.0);

    ContaPoupanca* conta3 = new ContaPoupanca();
    conta3->setTitular("Luiz");
    conta3->setSaldo(3000);
    conta3->setTaxaJuros(1.5);

    ContaPoupanca* conta4 = new ContaPoupanca();
    conta4->setTitular("Lara");
    conta4->setSaldo(2000);
    conta4->setTaxaJuros(2.5);

    ContaCorrente* conta5 = new ContaCorrente();
    conta5->setTitular("Luisa");
    conta5->setSaldo(5000);
    conta5-> setLimiteChequeEspecial(300);

    meuBanco.adicionarConta(conta1);
    meuBanco.adicionarConta(conta2);
    meuBanco.adicionarConta(conta3);
    meuBanco.adicionarConta(conta4);
    meuBanco.adicionarConta(conta5);

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

    conta1->usarChequeEspecial(500);
    conta2->calcularJuros();
    conta3->calcularJuros();
    conta4->calcularJuros();
    conta5->usarChequeEspecial(50);
    
    meuBanco.exibir_todas_contas();

    delete(conta1);

    return 0;
}
