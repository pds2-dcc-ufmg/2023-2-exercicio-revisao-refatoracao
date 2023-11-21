#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Banco.hpp"


int main() {
    Banco _meuBanco;

    std::vector<ContaBancaria*> _contasAdicionar = {};

    std::vector<std::pair<std::string, std::pair<int, double>>> _info = {
        {"Joao", {1500, 200}},
        {"Maria", {1000, 2.0}},
        {"Luiz", {3000, 1.5}},
        {"Lara", {2000, 2.5}},
        {"Luisa", {5000, 300}}
    };

    for (const auto& _i : _info) {
        const std::string& _titular = _i.first;
        const int _saldo = _i.second.first;
        const double _limiteJuros = _i.second.second;

        //o numero 10 foi escolhido pois pra esse problema não é passado nenhum juros acima da 10, mas pode ser adaptado
        if (_limiteJuros < 10) {
            _contasAdicionar.push_back(new ContaPoupanca(_titular, _saldo, _limiteJuros));
        } else {
            _contasAdicionar.push_back(new ContaCorrente(_titular, _saldo, _limiteJuros));
        }
    }

    for(auto* _conta : _contasAdicionar){
        _meuBanco.adicionarConta(_conta);
    }

    _meuBanco.exibirTodasContas();

    std::vector<std::pair<int, double>> _operacoes = {{0, 500}, {1,200}, {2 , 100}, {3, -1}, {4, 5001}};

    for(const auto& _o: _operacoes){
        const int _conta = _o.first;
        const double _valor = _o.second;
        //0 e 3 foram escolhidos seguindo a lógica já apresentada no código antes da refatoração
        if(_conta == 0 || _conta == 3){
            _meuBanco.depositarConta(_conta, _valor);
        }
        else{
            _meuBanco.sacarConta(_conta, _valor);
        }
        if(_conta == 4){
            _meuBanco.exibirTodasContas();
        }
    }

    //Mudança nos valores das seguintes contas para se adequar às mudanças ja contidas no código original
    _operacoes[3].second = 300;
    _operacoes[4].second = 50;

    for(const auto& _o: _operacoes){
        const int _conta = _o.first;
        const double _valor = _o.second;
        //0 e 3 foram escolhidos seguindo a lógica já apresentada no código antes da refatoração
        if(_conta == 0 || _conta == 3){
            _meuBanco.sacarConta(_conta, _valor);
        }
        else{
            _meuBanco.depositarConta(_conta, _valor);
        }
        if(_conta == 4){
            _meuBanco.exibirTodasContas();
        }
    }

    for(const auto& _o: _operacoes){
        const int _conta = _o.first;
        const double _valor = _o.second;
        //0 e 4 foram escolhidos seguindo a lógica já apresentada no código antes da refatoração
        if(_conta == 0 || _conta == 4){
            _meuBanco.chequeConta(_conta, _valor);
        }
        else{
            _meuBanco.jurosConta(_conta);
        }
        if(_conta == 4){
            _meuBanco.exibirTodasContas();
        }
    }

    for(auto* _conta : _contasAdicionar){
        delete _conta;
    }

    return 0;
}
