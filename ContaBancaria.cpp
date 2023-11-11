#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(std::string titular, double valor) : _titular(titular), _saldo(valor)
{
}

void ContaBancaria::depositar(double valor)
{
    if (valor > 0)
    {
        this->_saldo += valor;
        std::cout << "Deposito de R$" << valor << " efetuado com sucesso.\n";
    }
    else
    {
        std::cout << "Valor de deposito inválido.\n";
    }
}

void ContaBancaria::sacar(double valor)
{
    if (valor > 0 && valor <= this->_saldo)
    {
        this->_saldo -= valor;
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n";
    }
    else
    {
        std::cout << "Saque invalido. Verifique o valor ou saldo insuficiente.\n";
    }
}

double ContaBancaria::getSaldo()
{
    return this->_saldo;
}

std::string ContaBancaria::getTitular()
{
    return this->_titular;
}

double ContaBancaria::setSaldo(double valor)
{
    this->_saldo = valor;
    return this->_saldo;
}