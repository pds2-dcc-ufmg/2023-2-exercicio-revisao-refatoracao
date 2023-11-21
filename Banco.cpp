#include "Banco.hpp"

//Construror em branco apenas para mostrar que não há implementação
Banco::Banco(){}

void Banco::adicionarConta(ContaBancaria* conta) {
        contas.push_back(conta);
    }

void Banco::exibirTodasContas() {
    for (ContaBancaria* conta : contas) {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}

void Banco::sacarConta(int conta, double valor){
    contas[conta]->sacar(valor);
}

void Banco::chequeConta(int conta, double valor){
    contas[conta]->usarChequeEspecial(valor);
}

void Banco::jurosConta(int conta){
    contas[conta]->calcularJuros();
}

void Banco::depositarConta(int conta, double valor){
    contas[conta]->depositar(valor);
}