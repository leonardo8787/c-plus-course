#ifndef __ELEVADOR_HPP
#define __ELEVADOR_HPP
#include<string>
using namespace std;

class elevador{

    public:
        void setAndar(int a);
        int getAndar();
        void setTotal(int b);
        int getTotal();
        void setCapacidade(int c);
        int getCapacidade();
        void setQuanto(int d);
        int getQuanto();
        
    private:
        int andar;
        int total;
        int capacidade;
        int quanto;
        
};

#endif

