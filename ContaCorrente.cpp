#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial): ContaBancaria(titular, saldo), _limiteChequeEspecial(_limiteChequeEspecial){}

//Apenas por boa prática criando um destrutor para mostrar que é vazia a implementação
ContaCorrente::~ContaCorrente(){}

void ContaCorrente::usarChequeEspecial(double valor) {
    double _saldoAtual = getSaldo();
    double _valorTotal = _saldoAtual + _limiteChequeEspecial;
    if (valor > 0 && valor <= _valorTotal) {
        _saldoAtual -= valor;
        setSaldo(_saldoAtual);
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    } else {    
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
    }
}  

//Implementação vazia apenas para funcionamento correto das mudanças na main
void ContaCorrente::calcularJuros(){}