#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string titular, double saldo){
	this->titular = titular;
	this->saldo = saldo;
}

double ContaBancaria::getSaldo(){
    return saldo;
}

void ContaBancaria::setSaldo(double valor){
    saldo += valor;
}

void ContaBancaria::printInfo(){
    std::cout << "Saldo da conta de " << titular << ": R$" << saldo << "\n";
}


void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
    	std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
    	std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= saldo) {
	saldo -= valor;
	std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
    	std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}
