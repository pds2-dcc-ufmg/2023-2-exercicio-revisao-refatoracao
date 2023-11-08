#include "Banco.hpp"

int main() {
    Banco meuBanco;

    //criando contas
    meuBanco.adicionar_conta_corrente("Joao", 1500, 200);
    meuBanco.adicionar_conta_poupanca("Maria", 1000, 2.0);
    meuBanco.adicionar_conta_poupanca("Luiz", 3000, 1.5);
    meuBanco.adicionar_conta_poupanca("Lara", 2000, 2.5);
    meuBanco.adicionar_conta_corrente("Luisa", 5000, 300);

    meuBanco.exibir_todas_contas();

    //testes de deposito e saque
    meuBanco.depositar(0, 500);
    meuBanco.sacar(1, 200);
    meuBanco.sacar(2, 100);
    meuBanco.depositar(3, -1);
    meuBanco.sacar(4, 5001);

    meuBanco.exibir_todas_contas();

    //mais testes de deposito e saque
    meuBanco.sacar(0, 500);
    meuBanco.depositar(1, 200);
    meuBanco.depositar(2, 100);
    meuBanco.sacar(3, 300);
    meuBanco.depositar(4, 50);

    meuBanco.exibir_todas_contas();

    //testes com metodos especificos de tipos de contas difentes
    //para isso utilizamos downcasting
    ContaCorrente *conta0 = (ContaCorrente*) meuBanco.get_conta(0);
    conta0->usar_cheque_especial(500);

    ContaPoupanca *conta1 = (ContaPoupanca*) meuBanco.get_conta(1);
    conta1->calcular_juros();

    ContaPoupanca *conta2 = (ContaPoupanca*) meuBanco.get_conta(2);
    conta2->calcular_juros();

    ContaPoupanca *conta3 = (ContaPoupanca*) meuBanco.get_conta(3);
    conta3->calcular_juros();

    ContaCorrente *conta4 = (ContaCorrente*) meuBanco.get_conta(4);
    conta4->usar_cheque_especial(50);

    meuBanco.exibir_todas_contas();

    return 0;
}
