#include <iostream>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"

// Variáveis vao utilizar camelCase
// Funções vao utilizar snake_case
// Classes vao utilizar PascalCase


int main() {
    Banco meuBanco;

    ContaCorrente* conta1 = new ContaCorrente();
    conta1->set_titular("Joao");
    conta1->set_saldo(1500);
    conta1->set_limite_cheque_especial(200);

    ContaPoupanca* conta2 = new ContaPoupanca();
    conta2->set_titular("Maria");
    conta2->set_saldo(1000);
    conta2->set_taxa_juros(2.0);

    ContaPoupanca* conta3 = new ContaPoupanca();
    conta3->set_titular("Luiz");
    conta3->set_saldo(3000);
    conta3->set_taxa_juros(1.5);

    ContaPoupanca* conta4 = new ContaPoupanca();
    conta4->set_titular("Lara");
    conta4->set_saldo(2000);
    conta4->set_taxa_juros(2.5);

    ContaCorrente* conta5 = new ContaCorrente();
    conta5->set_titular("Luisa");
    conta5->set_saldo(5000);
    conta5->set_limite_cheque_especial(300);

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
