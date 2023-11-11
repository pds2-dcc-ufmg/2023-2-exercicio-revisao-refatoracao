#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string titular,double valor,double limite):ContaBancaria(titular,valor),_limiteChequeEspecial(limite){}

void ContaCorrente::usarChequeEspecial(double valor)
{
    double valorTotal = this->getSaldo() + this->getLimiteChequeEspecial();

    if (valor > 0 && valor <= valorTotal)
    {
        this->setSaldo(this->getSaldo() - valor);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    }
    else
    {
        std::cout << "Uso de cheque especial invalido. Verifique o valor ou limite.\n";
    }
}

double ContaCorrente::getLimiteChequeEspecial()
{
    return this->_limiteChequeEspecial;
}