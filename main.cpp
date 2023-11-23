#include <iostream>
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

    meuBanco.adicionarConta(conta1);
    meuBanco.adicionarConta(conta2);
    meuBanco.adicionarConta(conta3);
    meuBanco.adicionarConta(conta4);
    meuBanco.adicionarConta(conta5);

    meuBanco.exibirTodasContas();

    conta1->depositar(500);
    conta2->sacar(200);
    conta3->sacar(100);
    conta4->depositar(-1);
    conta5->sacar(5001);

    meuBanco.exibirTodasContas();

    conta1->sacar(500);
    conta2->depositar(200);
    conta3->depositar(100);
    conta4->sacar(300);
    conta5->depositar(50);

    meuBanco.exibirTodasContas();

    conta1->usarChequeEspecial(500);
    conta2->calcularJuros();
    conta3->calcularJuros();
    conta4->calcularJuros();
    conta5->usarChequeEspecial(50);

    meuBanco.exibirTodasContas();

    delete conta1;
    delete conta2;
    delete conta3;
    delete conta4;
    delete conta5;

    return 0;
}