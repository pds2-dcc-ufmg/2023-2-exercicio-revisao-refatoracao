#include "ContaCorrente.hpp"


void ContaCorrente::usarChequeEspecial(double valor){
    double valorTotal = this->getSaldo() + this->_limChequeEspecial;
    
    if(this->isWithinSaldoLim(valor)){
        this->diminuirSaldo(valor);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso." << std::endl;

    }else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite." << std::endl;
    }
}