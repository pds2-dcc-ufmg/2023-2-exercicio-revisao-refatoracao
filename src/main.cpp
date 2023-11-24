#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


int main() {

    Banco meuBanco;

    ContaCorrente* conta1 = new ContaCorrente("Joao",1500,200);

    ContaPoupanca* conta2 = new ContaPoupanca("Maria",1000,2.0);

    ContaPoupanca* conta3 = new ContaPoupanca("Luiz",3000,1.5);

    ContaPoupanca* conta4 = new ContaPoupanca("Lara",2000,2.5);

    ContaCorrente* conta5 = new ContaCorrente("Luisa",5000,300);

    meuBanco.adicionarConta(conta1);
    meuBanco.adicionarConta(conta2);
    meuBanco.adicionarConta(conta3);
    meuBanco.adicionarConta(conta4);
    meuBanco.adicionarConta(conta5);

    meuBanco.exibirTodasAsContas();

    try{
        conta1->depositar(500);
    } catch(ValorInvalido& e){
        std::cout << e.what();
    };

    try{
        conta2->sacar(200);
    } catch(SaqueInvalido& e){
        std::cout << e.what();
    }


    try{
        conta3->sacar(100);
    } catch(SaqueInvalido& e){
        std::cout << e.what();
    }

    try{
        conta4->depositar(-1);
    } catch(ValorInvalido& e){
        std::cout << e.what();
    };

    try{
        conta5->sacar(5001);
    } catch(SaqueInvalido& e){
        std::cout << e.what();
    };

    meuBanco.exibirTodasAsContas();

    try{
        conta1->sacar(500);
    } catch(SaqueInvalido& e){
        std::cout << e.what();
    }

    try{
        conta2->depositar(200);
    } catch(ValorInvalido& e){
        std::cout << e.what();
    };

    try{
        conta3->depositar(100);
    } catch(ValorInvalido& e){
        std::cout << e.what();
    };

    try{
        conta4->sacar(300);
    } catch(SaqueInvalido& e){
        std::cout << e.what();
    }

    try{
        conta5->depositar(50);
    } catch(ValorInvalido& e){
        std::cout << e.what();
    };

    meuBanco.exibirTodasAsContas();

    try{
        conta1->usarChequeEspecial(500);
    } catch(ChequeEspecialInvalido& e){
        std::cout << e.what();
    }

    conta2->calcularJuros();
    conta3->calcularJuros();
    conta4->calcularJuros();
    
    try{
        conta5->usarChequeEspecial(50);
    } catch(ChequeEspecialInvalido& e){
        std::cout << e.what();
    }
    
    meuBanco.exibirTodasAsContas();

    delete conta1;
    delete conta2;
    delete conta3;
    delete conta4;
    delete conta5;

    return 0;
}
