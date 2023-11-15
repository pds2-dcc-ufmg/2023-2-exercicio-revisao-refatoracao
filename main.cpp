#include <iostream>
#include <string>
#include <vector>
#include "Banco.hpp"

int main() {

    Banco meuBanco;

    ContaCorrente* conta1 = meuBanco.adicionarContaCorrente("Joao", 1500, 200);
    ContaPoupanca* conta2 = meuBanco.adicionarContaPoupanca("Maria", 1000, 2.0);
    ContaPoupanca* conta3 = meuBanco.adicionarContaPoupanca("Luiz", 3000, 1.5);
    ContaPoupanca* conta4 = meuBanco.adicionarContaPoupanca("Lara", 2000, 2.5);
    ContaCorrente* conta5 = meuBanco.adicionarContaCorrente("Luisa", 5000, 300);

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
