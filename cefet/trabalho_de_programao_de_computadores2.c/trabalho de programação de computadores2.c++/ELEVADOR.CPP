#include<iostream>
#include<string>
#include "ELEVADOR.HPP"
using namespace std;
    
        void elevador::setAndar(int a)
        {
            this->andar = a;
        }
        int elevador::getAndar()
        {
            return andar;
        }
        void elevador::setTotal(int b)
        {
            this->total = b;
        }
        int elevador::getTotal()
        {
            return total;
        }
        void elevador::setCapacidade(int c)
        {
            this->capacidade = c;
        }
        int elevador::getCapacidade()
        {
            return capacidade;
        }
        void elevador::setQuanto(int d)
        {
            this->quanto = d;
        }
        int elevador::getQuanto()
        {
            return quanto;
        }

