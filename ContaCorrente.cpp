#include "ContaCorrente.hpp"

double ContaCorrente::getLimiteChequeEspecial(){
    return limiteChequeEspecial;
};

void ContaCorrente::setLimiteChequeEspecial(double limite_cheque_especial){
    limiteChequeEspecial = limite_cheque_especial;
}

void ContaCorrente::usarChequeEspecial(double valor) {
    double valorTotal = getSaldo() + limiteChequeEspecial;
    if (valor > 0 && valor <= valorTotal) {
        double novo_saldo = getSaldo() - valor;
        setSaldo(novo_saldo);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}

