#include "Banco.hpp"

ContaPoupanca* Banco::criar_conta_poupanca(std::string titular, double saldo, double taxa_juros){
    ContaPoupanca * conta_inserida = new ContaPoupanca(titular,saldo,taxa_juros);
    this->_contas.push_back(conta_inserida);
    return conta_inserida;
}

ContaCorrente* Banco::criar_conta_corrente(std::string titular, double saldo, double limite_cheque_especial){
    ContaCorrente * conta_inserida = new ContaCorrente(titular,saldo,limite_cheque_especial);
    this->_contas.push_back(conta_inserida);
    return conta_inserida;
}


void Banco::exibir_todas_contas(){
    for (ContaBancaria* conta : this->_contas) {
        std::cout << "Saldo da conta de " << conta->get_titular() << ": R$" << conta->get_saldo() << "\n";
    }
}


ContaBancaria* Banco::get_conta(unsigned int indice){
    if(indice>this->_contas.size()) return nullptr;
    else return this->_contas.at(indice-1);
}


Banco::~Banco(){
    for(ContaBancaria* conta :this->_contas){
        delete conta;
    }
}
