#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string nome, double saldo, double limite) : ContaBancaria(nome) {
    this->setSaldo(saldo);
    this->setLimiteChequeEspecial(limite);
}

ContaCorrente::~ContaCorrente() {}

void ContaCorrente::usarChequeEspecial(double valor) {

    double valorTotal = this->getSaldo() + this->_limiteChequeEspecial;
    
    if (valor > 0 && valor <= valorTotal) {
        double novoSaldo = this->getSaldo() - valor;
        this->setSaldo(novoSaldo);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        throw ChequeEspecialInvalido();
    }   
}

double ContaCorrente::getLimiteChequeEspecial(){
    return this->_limiteChequeEspecial;
}

void ContaCorrente::setLimiteChequeEspecial(double limite){
    this->_limiteChequeEspecial = limite;
}