#include "Banco.hpp"

Banco::Banco(std::vector<ContaBancaria*> contas): _contas(contas){}

void Banco::adicionarConta(ContaBancaria* conta){
    _contas.push_back(conta);
}

void Banco::exibir_todas_contas(){
    for (ContaBancaria* conta : _contas) {
        std::cout << "Saldo da conta de " << conta->Get_titular() << ": R$" << conta->Get_saldo() <<std::endl;
    }
}