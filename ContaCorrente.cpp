#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string _titular, double _saldo,double limite):ContaBancaria(_titular,_saldo),limiteChequeEspecial(limite){}

void ContaCorrente::usarChequeEspecial(double valor){
        double valorTotal = this->getSaldo() + limiteChequeEspecial;
        if (valor > 0 && valor <= valorTotal) {
        setSaldo(this->getSaldo() - valor);
            std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
        } else {
            std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
        }
    }

double ContaCorrente::getLimiteChequeEspecial(){
        return this->limiteChequeEspecial;
}

ContaCorrente::~ContaCorrente(){}