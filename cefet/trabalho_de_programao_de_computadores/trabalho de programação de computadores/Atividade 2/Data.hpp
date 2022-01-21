#ifndef __Data_hpp
#define __Data_hpp

#include <iostream>
#include <time.h>

using namespace std;

class Data{
    private:
        int dia, mes, ano;
        time_t rawtime;
        struct tm * timeinfo;
    public:
        Data();
        void setDia(int dia);
        int getDia();
        void setMes(int mes);
        int getMes();
        void setAno(int ano);
        int getAno();
        void Avanca();
};

#endif