#include "ContaBancaria.hpp"
#include <string>
#include <iostream>

ContaBancaria::ContaBancaria(std::string _titular, double _saldo) : titular(_titular), saldo(_saldo) {}

std::string ContaBancaria::get_titular()
{
    return titular;
}

double ContaBancaria::get_saldo()
{
    return saldo;
}

void ContaBancaria::mudar_saldo(double valor)
{
    saldo = valor;
}

void ContaBancaria::depositar(double valor)
{
    if (valor > 0) {
        mudar_saldo(get_saldo() + valor);
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Valor de depósito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor)
{
    if (valor > 0 && valor <= saldo) {
        mudar_saldo(get_saldo() - valor);
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}

void ContaBancaria::print_info()
{
    std::cout << "Saldo da conta de " << titular << ": R$" << saldo << "\n";
}