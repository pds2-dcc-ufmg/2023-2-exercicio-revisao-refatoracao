#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


int main() {
    Banco meuBanco;

    std::vector<ContaBancaria*> contas_adicionar = {};

    std::vector<std::pair<std::string, std::pair<int, double>>> info = {
        {"Joao", {1500, 200}},
        {"Maria", {1000, 2.0}},
        {"Luiz", {3000, 1.5}},
        {"Lara", {2000, 2.5}},
        {"Luisa", {5000, 300}}
    };

    for (const auto& i : info) {
        const std::string& titular = i.first;
        const int saldo = i.second.first;
        const double limite_juros = i.second.second;

        //o numero 10 foi escolhido pois pra esse problema não é passado nenhum juros acima da 10, mas pode ser adaptado
        if (limite_juros < 10) {
            contas_adicionar.push_back(new ContaPoupanca(titular, saldo, limite_juros));
        } else {
            contas_adicionar.push_back(new ContaCorrente(titular, saldo, limite_juros));
        }
    }

    for(auto* conta : contas_adicionar){
        meuBanco.adicionarConta(conta);
    }

    meuBanco.exibirTodasContas();

    std::vector<std::pair<int, double>> operacoes = {{0, 500}, {1,200}, {2 , 100}, {3, -1}, {4, 5001}};

    for(const auto& o: operacoes){
        const int conta = o.first;
        const double valor = o.second;
        //0 e 3 foram escolhidos seguindo a lógica já apresentada no código antes da refatoração
        if(conta == 0 || conta == 3){
            meuBanco.depositarConta(conta, valor);
        }
        else{
            meuBanco.sacarConta(conta, valor);
        }
        if(conta == 4){
            meuBanco.exibirTodasContas();
        }
    }

    //Mudança nos valores das seguintes contas para se adequar às mudanças ja contidas no código original
    operacoes[3].second = 300;
    operacoes[4].second = 50;

    for(const auto& o: operacoes){
        const int conta = o.first;
        const double valor = o.second;
        //0 e 3 foram escolhidos seguindo a lógica já apresentada no código antes da refatoração
        if(conta == 0 || conta == 3){
            meuBanco.sacarConta(conta, valor);
        }
        else{
            meuBanco.depositarConta(conta, valor);
        }
        if(conta == 4){
            meuBanco.exibirTodasContas();
        }
    }

    for(const auto& o: operacoes){
        const int conta = o.first;
        const double valor = o.second;
        //0 e 4 foram escolhidos seguindo a lógica já apresentada no código antes da refatoração
        if(conta == 0 || conta == 4){
            meuBanco.chequeConta(conta, valor);
        }
        else{
            meuBanco.jurosConta(conta);
        }
        if(conta == 4){
            meuBanco.exibirTodasContas();
        }
    }

    for(auto* conta : contas_adicionar){
        delete conta;
    }

    return 0;
}
