#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente() {    
    this->limiteChequeEspecial = 0;
};

void ContaCorrente::set_limite_cheque_especial(double limiteChequeEspecial) {
    this->limiteChequeEspecial = limiteChequeEspecial;
}

double ContaCorrente::get_limite_cheque_especial() {
    return this->limiteChequeEspecial;
}

void ContaCorrente::usar_cheque_especial(double valorRequisitado) {
    double valorTotal = this->get_saldo() + this->get_limite_cheque_especial();

    if (valorRequisitado > 0 && valorRequisitado <= valorTotal) {
        double saldoAtualizado = this->get_saldo() - valorRequisitado;
        this->set_saldo(saldoAtualizado);
        std::cout << "Uso de cheque especial de R$" << valorRequisitado << " efetuado com sucesso." << std::endl;
    } else {
        std::cout << "Uso de cheque especial inválido. Verifique o valor ou limite." << std::endl;
    }
}
