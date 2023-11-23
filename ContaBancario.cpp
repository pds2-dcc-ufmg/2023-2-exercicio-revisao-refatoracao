#include "ContaBancaria.hpp"
#include "ExcecaoBiblioteca.hpp"

ContaBancaria::ContaBancaria(std::string _titular,double _saldo) : titular(_titular), saldo(_saldo) {}

void ContaBancaria::depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
        } else {
            throw biblioteca_excp::ExcecaoValorInvalido();
        }
    }
    
void ContaBancaria::sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
        } else {
            throw biblioteca_excp::ExcecaoSaldoInsuficiente();
        }
    }

std::string ContaBancaria::get_titular(){
    return this->titular;
}

double ContaBancaria::get_saldo(){
    return this->saldo;
}