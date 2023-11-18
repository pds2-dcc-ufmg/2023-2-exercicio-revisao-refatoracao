#ifndef BANCO_EXCP_H
#define BANCO_EXCP_H

#include <exception>
#include <string>

namespace banco_excp{
    class ExcecaoBanco : public std::exception {
    private:
        std::string _message;
    public:
        ExcecaoBanco(std::string message);
        const char* what() const noexcept override;
        static std::string formatarValor(double valor);

    };
    
    class ExcecaoDepositoNegativo : public banco_excp::ExcecaoBanco{
        public:
            ExcecaoDepositoNegativo();
    };

    class ExcecaoDepositoMinimo : public banco_excp::ExcecaoBanco{
        public:
            ExcecaoDepositoMinimo(double valorMinimo = 0);
    };

    class ExcecaoSaqueNegativo : public banco_excp::ExcecaoBanco{
        public:
            ExcecaoSaqueNegativo();
    };

    class ExcecaoSaldoInsuficiente : public banco_excp::ExcecaoBanco{
        public:
            ExcecaoSaldoInsuficiente(double saldo, double valor);
    };

    class ExcecaoSaqueMinimo : public banco_excp::ExcecaoBanco{
        public:
            ExcecaoSaqueMinimo(double valorMinimo = 0);
    };

    class ExcecaoChequeEspecialNegativo : public banco_excp::ExcecaoBanco{
        public:
            ExcecaoChequeEspecialNegativo();
    };

    class ExcecaoChequeEspecialValorMinimo : public banco_excp::ExcecaoBanco{
        public:
            ExcecaoChequeEspecialValorMinimo(double valorMinimo = 0);
    };

    class ExcecaoLimiteChequeEspecialAtingido : public banco_excp::ExcecaoBanco{
        private:
            std::string construirMensagem(double limite, double valor, double quantidadeDisponivel);
        public:
            ExcecaoLimiteChequeEspecialAtingido(double limite, double valor, double quantidadeDisponivel);
    };
}

#endif

