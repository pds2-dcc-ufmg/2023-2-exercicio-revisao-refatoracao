#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


int main() {
    Banco* meu_banco = new Banco();

    ContaCorrente* conta1 = meu_banco->adicionar_conta_corrente("Joao", 1500, 200);
    ContaPoupanca* conta2 = meu_banco->adicionar_conta_poupanca("Maria", 1000, 2.0);
    ContaPoupanca* conta3 = meu_banco->adicionar_conta_poupanca("Luiz", 3000, 1.5);
    ContaPoupanca* conta4 = meu_banco->adicionar_conta_poupanca("Lara", 2000, 2.5);
    ContaCorrente* conta5 = meu_banco->adicionar_conta_corrente("Luisa", 5000, 300);

    meu_banco->exibir_todas_contas();

    conta1->depositar(500);
    conta2->sacar(200);
    conta3->sacar(100);
    conta4->depositar(-1);
    conta5->sacar(5001);

    meu_banco->exibir_todas_contas();

    conta1->sacar(500);
    conta2->depositar(200);
    conta3->depositar(100);
    conta4->sacar(300);
    conta5->depositar(50);

    meu_banco->exibir_todas_contas();

    conta1->usar_cheque_especial(500);
    conta2->calcular_juros();
    conta3->calcular_juros();
    conta4->calcular_juros();
    conta5->usar_cheque_especial(50);

    meu_banco->exibir_todas_contas();

    delete meu_banco;

    return 0;
}