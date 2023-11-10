#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria *conta)
{
    contas.push_back(conta);
}

void Banco::exibir_todas_contas()
{
    for (ContaBancaria *conta : contas)
    {
        std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
    }
}

Banco::~Banco()
{
    for (int i = this->contas.size() - 1; i >= 0; i--)
    {
        delete this->contas[i];
    }
}