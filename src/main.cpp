#include "../include/Banco.hpp"
#include "../include/ContaPoupanca.hpp"
#include "../include/ContaCorrente.hpp"

int main() {
    std::vector<ContaBancaria*> contas;
    Banco meuBanco(contas);

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

    conta1->usarChequeEspecial(500);
    conta2->calcularJuros();
    conta3->calcularJuros();
    conta4->calcularJuros();
    conta5->usarChequeEspecial(50);
    
    meuBanco.exibir_todas_contas();

    return 0;
}