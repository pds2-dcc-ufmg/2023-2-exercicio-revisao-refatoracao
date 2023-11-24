#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include "ContaBancaria.hpp"

class ChequeEspecialInvalido : public std::exception{
    public:
        virtual const char* what() const throw(){
            return "Uso de cheque especial inválido. Verifique o valor ou limite.\n";
        }
};

class ContaCorrente : public ContaBancaria {
    private:
        double _limiteChequeEspecial;
    
    public:   
        ContaCorrente(std::string nome, double saldo, double limite);
        ~ContaCorrente();

        void usarChequeEspecial(double valor);

        double getLimiteChequeEspecial();
        void setLimiteChequeEspecial(double limite);
};


#endif