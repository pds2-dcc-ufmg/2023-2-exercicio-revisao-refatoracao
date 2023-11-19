#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <vector>
#include "ContaBancaria.hpp"

class Banco {
private:
    std::vector<ContaBancaria*> _contas;

public:
    void adicionar_conta(ContaBancaria* conta);
    void exibir_todas_contas() const;
};

#endif

//include string a mais
//tirar using namespace
//private std::vector<ContaBancaria*> contas;
//\n->endl
//snake case ou camel case
//Const-correctness: Marque o método exibir_todas_contas como constante, pois ele não modifica o objeto.