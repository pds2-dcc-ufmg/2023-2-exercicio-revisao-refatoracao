#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


int main() {
    Banco meuBanco;

    //Criação de nova Conta Corrente
    ContaCorrente* conta1 = new ContaCorrente();
    conta1->setTitular("Joao");
    conta1->setSaldo(1500);
    conta1->setLimiteChequeEspecial(200);

    //Criação de nova Conta Poupança
    ContaPoupanca* conta2 = new ContaPoupanca();
    conta2->setTitular("Maria");
    conta2->setSaldo(1000);
    conta2->setTaxaJuros(2.0);

    //Criação de nova Conta Poupança
    ContaPoupanca* conta3 = new ContaPoupanca();
    conta3->setTitular("Luiz");
    conta3->setSaldo(3000);
    conta3->setTaxaJuros(1.5);

    //Criação de nova Conta Poupança
    ContaPoupanca* conta4 = new ContaPoupanca();
    conta4->setTitular("Lara");
    conta4->setSaldo(2000);
    conta4->setTaxaJuros(2.5);

    //Criação de nova Conta Corrente
    ContaCorrente* conta5 = new ContaCorrente();
    conta5->setTitular("Luisa");
    conta5->setSaldo(5000);
    conta5->setLimiteChequeEspecial(300);

    //Adição das contas criadas acima no Banco
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

    return 0;
}
