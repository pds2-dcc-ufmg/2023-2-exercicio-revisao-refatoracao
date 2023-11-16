#include "ContaCorrente.hpp"

void ContaCorrente::usar_cheque_especial(double valor)
{
    double saldo = getSaldo();
    double valorTotal = saldo + limiteChequeEspecial;

    if (valor > 0 && valor <= valorTotal) {
            setSaldo(saldo - valor); 
            std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
        } else {
            std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}

double ContaCorrente::getLimiteChequeEspecial()
{
    return this->limiteChequeEspecial;
}

void ContaCorrente::setLimiteChequeEspecial(double novoLimite)
{
    this->limiteChequeEspecial = novoLimite;
}
