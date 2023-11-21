#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string _titular, double _saldo,double _limiteChequeEspecial):ContaBancaria(_titular,_saldo),limiteChequeEspecial(_limiteChequeEspecial){
    this->setValorTotal();
}

 void ContaCorrente::setValorTotal(){
    this->valorTotal= this->getSaldo() + limiteChequeEspecial;
}

void ContaCorrente::usarChequeEspecial(double valor){
    if (valor > 0 && valor <= this->valorTotal) {
        setSaldo(this->getSaldo() - valor);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } 
    else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}

double ContaCorrente::getLimiteChequeEspecial(){
    return this->limiteChequeEspecial;
}

ContaCorrente::~ContaCorrente(){}