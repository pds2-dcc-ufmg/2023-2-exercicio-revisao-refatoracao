#include <iostream>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"

int main() {
    Banco meuBanco;

    ContaCorrente conta1("Joao", 200);
    conta1.depositar(1500);

    ContaPoupanca conta2("Maria", 2.0);
    conta2.depositar(1000);

    ContaPoupanca conta3("Luiz", 1.5);
    conta3.depositar(3000);

    ContaPoupanca conta4("Lara", 2.5);
    conta4.depositar(2000);

    ContaCorrente conta5("Luisa", 300);
    conta5.depositar(5000);

    meuBanco.adicionarConta(&conta1);
    meuBanco.adicionarConta(&conta2);
    meuBanco.adicionarConta(&conta3);
    meuBanco.adicionarConta(&conta4);
    meuBanco.adicionarConta(&conta5);

    meuBanco.exibirTodasContas();

    conta1.depositar(500);
    conta2.sacar(200);
    conta3.sacar(100);
    conta4.depositar(-1);
    conta5.sacar(5001);

    meuBanco.exibirTodasContas();

    conta1.sacar(500);
    conta2.depositar(200);
    conta3.depositar(100);
    conta4.sacar(300);
    conta5.depositar(50);

    meuBanco.exibirTodasContas();

    conta1.usarChequeEspecial(500);
    conta2.calcularJuros();
    conta3.calcularJuros();
    conta4.calcularJuros();
    conta5.usarChequeEspecial(50);

    meuBanco.exibirTodasContas();

    return 0;
}
