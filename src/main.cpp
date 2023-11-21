
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


int main() {
    Banco meuBanco;

    conta_corrente* conta1 = new conta_corrente("Joao", 1500, 200);

    conta_poupanca* conta2 = new conta_poupanca("Maria", 1000, 2.0);

    conta_poupanca* conta3 = new conta_poupanca("Luiz", 3000, 1.5);

    conta_poupanca* conta4 = new conta_poupanca("Lara", 2000, 2.5);

    conta_corrente* conta5 = new conta_corrente("Luisa", 5000, 300);

    meuBanco.adicionarConta(conta1);
    meuBanco.adicionarConta(conta2);
    meuBanco.adicionarConta(conta3);
    meuBanco.adicionarConta(conta4);
    meuBanco.adicionarConta(conta5);

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
