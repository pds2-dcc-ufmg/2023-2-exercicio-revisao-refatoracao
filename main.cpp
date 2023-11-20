#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


#include <stdexcept>
#include <string>
#include <iostream>

void tryDeposit(ContaBancaria *conta, double valor){
    try{
        conta->depositar(valor);
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
}

void trySacar(ContaBancaria *conta, double valor){
    try{
        conta->sacar(valor);
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
}

void tryUsarChequeEspecial(ContaCorrente *conta, double valor){
    try{
        conta->usarChequeEspecial(valor);
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
}

int main() {
    Banco meuBanco;

    ContaCorrente *conta1 = new ContaCorrente("Joao", 1500, 200);
    ContaPoupanca *conta2 = new ContaPoupanca("Maria", 1000, 2.0);
    ContaPoupanca *conta3 = new ContaPoupanca("Luiz", 3000, 1.5);
    ContaPoupanca *conta4 = new ContaPoupanca("Lara", 2000, 2.5);
    ContaCorrente *conta5 = new ContaCorrente("Luisa", 5000, 300);


    meuBanco.adicionarConta(conta1);
    meuBanco.adicionarConta(conta2);
    meuBanco.adicionarConta(conta3);
    meuBanco.adicionarConta(conta4);
    meuBanco.adicionarConta(conta5);

    meuBanco.exibir_todas_contas();

    tryDeposit(conta1, 500);
    trySacar(conta2, 200);
    trySacar(conta3, 100);    
    tryDeposit(conta4, -1);
    trySacar(conta5, 5001);

    meuBanco.exibir_todas_contas();

    trySacar(conta1, 500);
    tryDeposit(conta2, 200);
    tryDeposit(conta3, 100);
    trySacar(conta4, 300);
    tryDeposit(conta5, 50);
    
    meuBanco.exibir_todas_contas();

    tryUsarChequeEspecial(conta1, 500);
    
    conta2->calcularJuros();
    conta3->calcularJuros();
    conta4->calcularJuros();
    tryUsarChequeEspecial(conta5, 50);
    
    meuBanco.exibir_todas_contas();

    return 0;
}
