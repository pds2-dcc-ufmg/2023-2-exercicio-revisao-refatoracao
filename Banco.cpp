#include "Banco.hpp"

void Banco::adicionarConta(ContaBancaria* conta) {
    contas_.push_back(conta);
}

void Banco::exibirTodasContas() const {
    for (const auto& conta : contas_) {
        conta->exibirDados();
    }
}
