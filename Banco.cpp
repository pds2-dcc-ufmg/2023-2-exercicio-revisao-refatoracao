#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria *conta)
{
    contas.push_back(conta);
}

void Banco::exibir_todas_contas()
{
    for (ContaBancaria* conta : contas) {
        conta->print_info();
    }
}
