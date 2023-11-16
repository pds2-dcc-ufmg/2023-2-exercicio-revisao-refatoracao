#include "Banco.hpp"

    std::vector<ContaBancaria*> Banco::getVectorContas()
    {
        return this->contas;
    }

    void Banco::adicionar_conta(ContaBancaria* conta)
    {
        Banco::contas.push_back(conta); 
    }

    void Banco::exibir_todas_contas()
    {
        for (ContaBancaria* conta : contas) {
            std::cout << "Saldo da conta de " << conta->getTitular() << ": R$" << conta->getSaldo() << "\n";
        }
    }

    Banco::~Banco()
    {
        for (auto& conta : contas) {
            delete conta;
        }
    }
