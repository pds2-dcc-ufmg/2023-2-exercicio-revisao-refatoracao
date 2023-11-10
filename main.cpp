#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


int main() {
    Banco meuBanco;

    std::vector<ContaBancaria*> contas;

    // Criar contas
    contas.push_back(new ContaCorrente("Joao", 1500, 200));
    contas.push_back(new ContaPoupanca("Maria", 1000, 2.0));
    contas.push_back(new ContaPoupanca("Luiz", 3000, 1.5));
    contas.push_back(new ContaPoupanca("Lara", 2000, 2.5));
    contas.push_back(new ContaCorrente("Luisa", 5000, 300));

    // Adicionar contas ao banco
    for (ContaBancaria* conta : contas) {
        meuBanco.adicionarConta(conta);
    }

    // Exibir informações sobre todas as contas no banco
    meuBanco.exibirTodasContas();

    contas[0]->depositar(500);
    contas[1]->sacar(200);
    contas[2]->sacar(100);
    contas[3]->depositar(-1);
    contas[4]->sacar(5001);

    // Exibir informações após as primeiras operações
    meuBanco.exibirTodasContas();


    contas[0]->sacar(500);
    contas[1]->depositar(200);
    contas[2]->depositar(100);
    contas[3]->sacar(300);
    contas[4]->depositar(50);


    // Exibir informações após as segundas operações
    meuBanco.exibirTodasContas();

    ContaCorrente* cc0 = dynamic_cast<ContaCorrente*>(contas[0]);
    if (cc0) {
        cc0->usarChequeEspecial(500);
    }

    ContaPoupanca* cp1 = dynamic_cast<ContaPoupanca*>(contas[1]);
    if (cp1) {
        cp1->adicionarJuros();
    }

    ContaPoupanca* cp2 = dynamic_cast<ContaPoupanca*>(contas[2]);
    if (cp2) {
        cp2->adicionarJuros();
    }

    ContaPoupanca* cp3 = dynamic_cast<ContaPoupanca*>(contas[3]);
    if (cp3) {
        cp3->adicionarJuros();
    }

    ContaCorrente* cc4 = dynamic_cast<ContaCorrente*>(contas[4]);
    if (cc4) {
        cc4->usarChequeEspecial(50);
    }
    /*contas[0]->usarChequeEspecial(500);
    contas[1]->calcularJuros();
    contas[2]->calcularJuros();
    contas[3]->calcularJuros();
    contas[4]->usarChequeEspecial(50);*/
    

    // Exibir informações após as últimas operações
    meuBanco.exibirTodasContas();

    // Liberar a memória alocada dinamicamente
    for (ContaBancaria* conta : contas) {
        delete conta;
    }

    return 0;
}
