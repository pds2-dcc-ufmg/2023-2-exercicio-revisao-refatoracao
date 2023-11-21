#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    contas.push_back(conta);
}


void Banco::exibir_todas_contas() {
    for (ContaBancaria* conta : contas) {
        //Change chama o metodo para imprimir
        conta->printInfo();
    }
}
