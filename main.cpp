#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"

/*1. Modularização e Organização do Código:

A reestruturação incluiu a criação de arquivos .cpp e .hpp para cada classe, promovendo uma melhor organização e legibilidade do código-fonte.
2. Encapsulamento Adequado dos Atributos:

Os atributos foram segregados nos acessos adequados, com declarações em private para os atributos e em public para os métodos, exceto setSaldo, que foi definido como protected. Essa abordagem ressalta a importância do encapsulamento na hierarquia de classes.
3. Padronização de Nomenclatura:

Foi adotada uma convenção de nomenclatura consistente, utilizando camelCase para variáveis, funções e classes. Além disso, a primeira letra das classes foi padronizada como maiúscula, seguindo as boas práticas de codificação.
4. Alocação Dinâmica e Gerenciamento de Memória:

A introdução do operador new na declaração e instância de objetos permite uma alocação dinâmica de recursos. Os construtores e destrutores foram redefinidos para garantir o correto gerenciamento de memória. A classe Banco foi projetada para alocar dinamicamente contas, cuidando da liberação de memória no momento apropriado.
5. Utilização de Métodos Get e Set:

Métodos get e set foram introduzidos para manter o encapsulamento dos atributos privados, promovendo uma interface controlada para acesso e modificação desses atributos nas classes.
6. Correção do Padrão de Indentação:

A uniformização do padrão de indentação foi aplicada em todos os arquivos, promovendo uma leitura consistente e melhorando a legibilidade do código.
Essas adaptações visam aprimorar a estrutura do código, tornando-o mais compreensível, seguindo os princípios de programação orientada a objetos e aderindo às boas práticas de codificação.*/


int main() {
Banco* _Banco = new Banco;
std::vector<ContaBancaria*> contas;

contas.push_back(_Banco->adicionarContaCorrente("Joao", 1500, 200));
contas.push_back(_Banco->adicionarContaPoupanca("Maria", 1000, 2.0));
contas.push_back(_Banco->adicionarContaPoupanca("Luiz", 3000, 1.5));
contas.push_back(_Banco->adicionarContaPoupanca("Lara", 2000, 2.5));
contas.push_back(_Banco->adicionarContaCorrente("Luisa", 5000, 300));

_Banco->exibirTodasContas();

contas[0]->depositar(500);
contas[1]->sacar(200);
contas[2]->sacar(100);
contas[3]->depositar(-1);
contas[4]->sacar(5001);

_Banco->exibirTodasContas();

contas[0]->sacar(500);
contas[1]->depositar(200);
contas[2]->depositar(100);
contas[3]->sacar(300);
contas[4]->depositar(50);

_Banco->exibirTodasContas();

dynamic_cast<ContaCorrente*>(contas[0])->usarChequeEspecial(500);
dynamic_cast<ContaPoupanca*>(contas[1])->adicionarJuros();
dynamic_cast<ContaPoupanca*>(contas[2])->adicionarJuros();
dynamic_cast<ContaPoupanca*>(contas[3])->adicionarJuros();
dynamic_cast<ContaCorrente*>(contas[4])->usarChequeEspecial(50);

_Banco->exibirTodasContas();

delete _Banco;

return 0;
}

