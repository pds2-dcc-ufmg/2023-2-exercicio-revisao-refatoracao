#include "ExcecaoBanco.hpp"
#include <iomanip>
#include <sstream>

namespace banco_excp{
    //Exceção Banco
    ExcecaoBanco::ExcecaoBanco(std::string message) : _message(message){};
    
    const char* ExcecaoBanco::what() const noexcept {
        return this->_message.c_str();
    }

    std::string ExcecaoBanco::formatarValor(double valor){
        std::ostringstream stream;
        stream << std::fixed << std::setprecision(2) << valor;
        return stream.str();
    }

    ExcecaoDepositoNegativo::ExcecaoDepositoNegativo() :
        ExcecaoBanco("Depósito inválido. Valores negativos não são permitidos"){}

    ExcecaoDepositoMinimo::ExcecaoDepositoMinimo(double valorMinimo) :
        ExcecaoBanco("O valor minimo para depósito deve ser maior que R$" + this->formatarValor(valorMinimo)){};
    
    ExcecaoSaqueNegativo::ExcecaoSaqueNegativo() : 
        ExcecaoBanco("Saque inválido. Valores negativos não são permitidos"){}
    
    ExcecaoSaqueMinimo::ExcecaoSaqueMinimo(double valorMinimo) :
        ExcecaoBanco("O valor minimo para saque deve ser maior que R$" + this->formatarValor(valorMinimo)){};

    ExcecaoSaldoInsuficiente::ExcecaoSaldoInsuficiente(double saldo, double valor) :
        ExcecaoBanco("Saque no valor de R$" + this->formatarValor(valor) + " inválido. Seu saldo disponível é de: R$" + this->formatarValor(saldo)){}
    
    ExcecaoChequeEspecialNegativo::ExcecaoChequeEspecialNegativo() :
        ExcecaoBanco("Cheque especial inválido. Valores negativos não são permitidos"){} 
    
    ExcecaoLimiteChequeEspecialAtingido::ExcecaoLimiteChequeEspecialAtingido(double limite, double valor, double quantidadeDisponivel) :
        ExcecaoBanco(construirMensagem(limite, valor, quantidadeDisponivel)){}

    ExcecaoChequeEspecialValorMinimo::ExcecaoChequeEspecialValorMinimo(double valorMinimo) :
        ExcecaoBanco("O valor minimo para uso do cheque especial é de R$" + this->formatarValor(valorMinimo)){}

    std::string ExcecaoLimiteChequeEspecialAtingido::construirMensagem(double limite, double valor, double quantidadeDisponivel) {
        std::ostringstream mensagem;

        if (quantidadeDisponivel == 0) {
            mensagem << "Limite de R$" << this->formatarValor(limite) << " atingido.";
            return mensagem.str();
        } 

        mensagem << "Cheque especial no valor de R$" << this->formatarValor(valor) << " não permitido."
                << " Você possui R$" << this->formatarValor(quantidadeDisponivel) << " disponíveis para saque, "
                << "de um limite de R$" << this->formatarValor(limite);

        return mensagem.str();
    }
}