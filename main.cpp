#include <iostream>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"

#define SUCCESS 0

int main() {
    Banco meu_banco; //meu_banco está na pilha e seu destrutor será chamado liberando a memória usada para cada conta

    ContaCorrente* conta1 = new ContaCorrente(); //uso de construtores padrao
    conta1->setTitular("Joao");
    conta1->setSaldo(1500);
    conta1->setLimiteChequeEspecial(200);

    ContaPoupanca* conta2 = new ContaPoupanca();
    conta2->setTitular("Maria");
    conta2->setSaldo(1000);
    conta2->setTaxaJuros(2.0);

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
    conta5->setLimiteChequeEspecial(300);

    meu_banco.adicionar_conta(conta1);
    meu_banco.adicionar_conta(conta2);
    meu_banco.adicionar_conta(conta3);
    meu_banco.adicionar_conta(conta4);
    meu_banco.adicionar_conta(conta5);

    meu_banco.exibir_todas_contas();

   conta1->depositar(500.0);
    conta2->sacar(200.0);
    conta3->sacar(100.0);
    conta4->depositar(-1.0); // Lida com erro
    conta5->sacar(5001.0); // Lida com erro

    meu_banco.exibir_todas_contas();

    conta1->sacar(500.0);
    conta2->depositar(200.0);
    conta3->depositar(100.0);
    conta4->sacar(300.0);
    conta5->depositar(50.0);

    meu_banco.exibir_todas_contas();

    conta1->usar_cheque_especial(500.0);
    conta2->calcular_juros();
    conta3->calcular_juros();
    conta4->calcular_juros();
    conta5->usar_cheque_especial(50.0);

    meu_banco.exibir_todas_contas();

    return SUCCESS;
}
