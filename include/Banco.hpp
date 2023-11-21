#ifndef BANCO_HPP
#define BANCO_HPP

#include "ContaBancaria.hpp"

class Banco {
private:
    std::vector<ContaBancaria*> _contas;
public:
    Banco(const std::vector<ContaBancaria*>& contas);
    ~Banco();

    void adicionar_conta(ContaBancaria* conta);
    void exibir_todas_contas() const;
};

#endif // BANCO_HPP