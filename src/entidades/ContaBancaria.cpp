#include "ContaBancaria.hpp"

unsigned int ContaBancaria::_proximoID = 0;

ContaBancaria::ContaBancaria(std::string titular, double saldo) : _ID(this->_proximoID++), _titular(titular), _saldo(saldo){};

void ContaBancaria::exibirConta(){
    std::cout << "Saldo da conta de " << this->_titular << ": R$" << this->_saldo << "\n";
}

std::string ContaBancaria::getTitular(){
    return this->_titular;
}

double ContaBancaria::getSaldo(){
    return this->_saldo;
}

void ContaBancaria::depositar(double valor){
    try{
        if(valor < 0){
            throw banco_excp::ExcecaoDepositoNegativo();
        }

        if(valor < this->DepositoMinimo){
            throw banco_excp::ExcecaoDepositoMinimo(this->DepositoMinimo);
        }

        adicionarIncremento(valor);
        std::cout << "Depósito de R$" << valor << " efetuado com sucesso.\n";
    }
    catch(banco_excp::ExcecaoDepositoNegativo& e){
        std::cerr << e.what() << '\n';
    }
    catch(banco_excp::ExcecaoDepositoMinimo& e){
        std::cerr << e.what() << '\n';
    }
}

void ContaBancaria::sacar(double valor){
    try{
        if(valor < 0){
            throw banco_excp::ExcecaoSaqueNegativo();
        }
        if(valor < this->SaqueMinimo){
            throw banco_excp::ExcecaoSaqueMinimo(this->SaqueMinimo);
        }
        if(valor > this->_saldo){
            throw banco_excp::ExcecaoSaldoInsuficiente(this->_saldo, valor);
        }
        deduzirSaldo(valor);
        std::cout << "Saque de R$" << valor << " efetuado com sucesso.\n"; 
    }
    catch(const banco_excp::ExcecaoSaqueNegativo& e){
        std::cerr << e.what() << '\n';
    }
    catch(const banco_excp::ExcecaoSaqueMinimo& e){
        std::cerr << e.what() << '\n';
    }
    catch(const banco_excp::ExcecaoSaldoInsuficiente& e){
        std::cerr << e.what() << '\n';
    }
}

void ContaBancaria::adicionarIncremento(double valor){
    this->_saldo += valor;
}

void ContaBancaria::deduzirSaldo(double valor){
    this->_saldo -= valor;
}



