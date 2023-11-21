#include "Banco.hpp"

//Construror em branco apenas para mostrar que não há implementação
Banco::Banco(){}

void Banco::adicionarConta(ContaBancaria* conta) {
        _contas.push_back(conta);
    }

void Banco::exibirTodasContas() {
    for (ContaBancaria* _conta : _contas) {
        std::cout << "Saldo da conta de " << _conta->getTitular() << ": R$" << _conta->getSaldo() << "\n";
    }
}

void Banco::sacarConta(int conta, double valor){
    _contas[conta]->sacar(valor);
}

void Banco::chequeConta(int conta, double valor){
    _contas[conta]->usarChequeEspecial(valor);
}

void Banco::jurosConta(int conta){
    _contas[conta]->calcularJuros();
}

void Banco::depositarConta(int conta, double valor){
    _contas[conta]->depositar(valor);
}