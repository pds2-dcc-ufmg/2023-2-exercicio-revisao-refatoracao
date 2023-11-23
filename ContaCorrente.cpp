#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string nome, double saldo, double limite){
    setTitular(nome);
    setSaldo(saldo);
    _limiteChequeEspecial = limite;
}

ContaCorrente::ContaCorrente(){
}

void ContaCorrente::usarChequeEspecial(double valor) {
    double valorTotal = getSaldo() + _limiteChequeEspecial;

    if (valor > 0 && valor <= valorTotal) {
        setSaldo( getSaldo() -valor );
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}

void ContaCorrente::setLimiteChequeEspecial(double limiteChequeEspecial){
    _limiteChequeEspecial = limiteChequeEspecial;
}

double ContaCorrente::getLimiteChequeEspecial(){
    return _limiteChequeEspecial;
}

ContaCorrente::~ContaCorrente(){

}