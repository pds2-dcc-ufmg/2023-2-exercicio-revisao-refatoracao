#include <iostream>
#include <string>
#include <vector>
#include "Banco.hpp"


int main() {

    Banco meu_banco;

    //Banco gerencia as contas e sua memória

    ContaCorrente* c1 = meu_banco.criar_conta_corrente("Joao",1500,200);

    ContaPoupanca* c2 = meu_banco.criar_conta_poupanca("Maria",1000,2.0);

    ContaPoupanca* c3 = meu_banco.criar_conta_poupanca("Luiz",3000,1.5);

    ContaPoupanca* c4 = meu_banco.criar_conta_poupanca("Lara",2000,2.5);

    ContaCorrente* c5 = meu_banco.criar_conta_corrente("Luisa",5000,300);

    meu_banco.exibir_todas_contas();
    
    //Acesso geral pelo próprio banco = comportamento geral

    meu_banco.get_conta(1)->depositar(500);
    meu_banco.get_conta(2)->sacar(200);
    meu_banco.get_conta(3)->sacar(100);
    meu_banco.get_conta(4)->depositar(-1);
    meu_banco.get_conta(5)->sacar(5001);

    meu_banco.exibir_todas_contas();

    meu_banco.get_conta(1)->sacar(500);
    meu_banco.get_conta(2)->depositar(200);
    meu_banco.get_conta(3)->depositar(100);
    meu_banco.get_conta(4)->sacar(300);
    meu_banco.get_conta(5)->depositar(50);

    meu_banco.exibir_todas_contas();

    //Acesso individual = comportamento específico
    c1->usar_cheque_especial(500);
    c2->calcular_juros();
    c3->calcular_juros();
    c4->calcular_juros();
    c5->usar_cheque_especial(50);

    meu_banco.exibir_todas_contas();

    return 0;
}
