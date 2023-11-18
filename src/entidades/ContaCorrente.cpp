#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string titular, double saldo, double limiteChequeEspecial) : ContaBancaria(titular, saldo), _limiteChequeEspecial(limiteChequeEspecial), _limiteDisponivel(limiteChequeEspecial){};

void ContaCorrente::usarChequeEspecial(double valor){
    try{
        if(valor < 0){
            throw banco_excp::ExcecaoChequeEspecialNegativo();
        }
        if(valor == 0){
            //Caso queira fazer um valor mínimo para uso do cheque especial, basta criar um atributo
            //e passar como parâmetro do lançamento da exceção {valor padrao é de 0 reais}
            throw banco_excp::ExcecaoChequeEspecialValorMinimo();
        }
        if(valor > this->_limiteDisponivel){
            throw banco_excp::ExcecaoLimiteChequeEspecialAtingido(this->_limiteChequeEspecial, valor, this->_limiteDisponivel);
        }
        this->adicionarIncremento(valor);
        this->_limiteDisponivel -= valor;
        std::cout << "Uso de cheque especial de R$" << valor << " efetuado com sucesso.\n";
    }
    catch(banco_excp::ExcecaoLimiteChequeEspecialAtingido &e){
        std::cout << e.what() << '\n';
    }
    catch(banco_excp::ExcecaoChequeEspecialNegativo &e){
        std::cout << e.what() << '\n';
    }
    catch(banco_excp::ExcecaoChequeEspecialValorMinimo &e){
        std::cout << e.what() << '\n';
    }
    
}

void ContaCorrente::verificarLimiteDisponivel(){
    std::cout << "Você possui R$" + banco_excp::ExcecaoBanco::formatarValor(this->_limiteDisponivel) << " disponíveis para uso no cheque especial \n";
}

void ContaCorrente::setLimiteChequeEspecial(double valor){
    this->_limiteChequeEspecial = valor;
}

double ContaCorrente::getLimiteChequeEspecial(){
    return this->_limiteChequeEspecial;
}