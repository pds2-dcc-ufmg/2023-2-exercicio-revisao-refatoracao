#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENTE_H

#include <iostream>
#include <string>
#include "ContaBancaria.hpp"

class ContaCorrente : public ContaBancaria {

    private:
        double limiteChequeEspecial;

    public
	ContaCorrente(std::string, double, double);
	void usarChequeEspecial(double valor);

};


#endif