#ifndef BIBLIOTECA_EXCP_H
#define BIBLIOTECA_EXCP_H
#include <iostream>
#include <exception>
#include <string>

namespace biblioteca_excp {

    class ExcecaoBiblioteca : public std::exception {
    private:
    std::string _message;

     public:
     ExcecaoBiblioteca(std::string message) : _message(message){};
     const char* what() const throw(){
     return this->_message.c_str();}
    };

     class ExcecaoValorInvalido : public ExcecaoBiblioteca {
     public:
     ExcecaoValorInvalido() : ExcecaoBiblioteca("Valor Invalido.") {}
     };

     class ExcecaoSaldoInsuficiente : public ExcecaoBiblioteca {
     public:
     ExcecaoSaldoInsuficiente() : ExcecaoBiblioteca("Saldo Insuficiente.") {}
     };

     class ExcecaoSemLimite : public ExcecaoBiblioteca {
     public:
     ExcecaoSemLimite() : ExcecaoBiblioteca("Uso de cheque especial inválido. Verifique o valor ou limite.") {}
     };
     
}

#endif