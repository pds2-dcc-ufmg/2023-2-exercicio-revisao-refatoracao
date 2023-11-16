#include "ContaBancaria.hpp"

double ContaBancaria::getSaldo()
{
    return this->saldo;
}

void ContaBancaria::setSaldo(double novo_saldo)
{
    this->saldo = novo_saldo;
}

std::string ContaBancaria::getTitular()
{
    return this->titular;
}

void ContaBancaria::setTitular(std::string novoTitular)
{
    this->titular = novoTitular;
}

void ContaBancaria::depositar(double valor)
{
    if (valor > 0) { //Verificacao se o valor inserido é valido
            this->saldo += valor;
            std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
        } else {
            std::cout << "Valor de depósito inválido.\n";
        }
}

void ContaBancaria::sacar(double valor)
{
    if (valor > 0 && valor <= saldo){ //Verificacao se o valor inserido é valido
            this->saldo -= valor;
            std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
        }else {
        std::cout << "Saque inválido. Verifique o valor ou saldo insuficiente.\n";
    }
}
