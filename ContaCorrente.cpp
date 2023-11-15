#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial): ContaBancaria(titular,saldo) ,_limiteChequeEspecial(limiteChequeEspecial){}

ContaCorrente::~ContaCorrente(){}

void ContaCorrente::usarChequeEspecial(double valor) {
    double saldo = Get_saldo();
    double valorTotal = saldo + _limiteChequeEspecial;
    if (valor > 0 && valor <= valorTotal) {
        saldo -= valor;
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso." << std::endl;
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite." <<std::endl;
    }

}

double ContaCorrente::Get_limiteChequeEspecial (){
    return _limiteChequeEspecial;
}

