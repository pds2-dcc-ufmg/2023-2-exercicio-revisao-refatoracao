#include "ContaCorrente.hpp"
#include <string>
#include <iostream>

ContaCorrente::ContaCorrente(std::string _titular, double _saldo, double _limiteChequeEspecial) : ContaBancaria(_titular, _saldo), limiteChequeEspecial(_limiteChequeEspecial) {}

void ContaCorrente::usarChequeEspecial(double valor)
{
    double valorTotal = get_saldo() + limiteChequeEspecial;
    if (valor > 0 && valor <= valorTotal) {
        mudar_saldo(get_saldo() - valor);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}
