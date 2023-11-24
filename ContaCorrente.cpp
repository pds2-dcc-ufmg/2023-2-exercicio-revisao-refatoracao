#include "ContaCorrente.hpp"
#include "ExcecaoBiblioteca.hpp"

ContaCorrente::ContaCorrente(std::string _titular, double _saldo, double _limiteChequeEspecial) : 
ContaBancaria(_titular, _saldo), limiteChequeEspecial(_limiteChequeEspecial) {}

void ContaCorrente::usar_cheque_especial(double valor) {
        double valorTotal = saldo + limiteChequeEspecial;
        if (valor > 0){
            if (valor <= valorTotal){
            saldo -= valor;
            std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
            } else {
            throw biblioteca_excp::ExcecaoSemLimite();}
        } else {
            throw biblioteca_excp::ExcecaoValorInvalido();}
    }