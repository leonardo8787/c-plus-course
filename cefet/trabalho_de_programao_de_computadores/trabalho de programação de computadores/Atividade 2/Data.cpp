#include "Data.hpp"

    Data::Data(){
        this->dia=dia;
        this->mes=mes;
        this->ano=ano;
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        printf ( "Data atual do sistema é: %s", asctime (timeinfo) );
    }
    void Data::setDia(int dia){
        this->dia=dia;
    }
    int Data::getDia(){
        return dia;
    }
    void Data::setMes(int mes){
        this->mes=mes;
    }
    int Data::getMes(){
        return mes;
    }
    void Data::setAno(int ano){
        this->ano=ano;
    }
    int Data::getAno(){
        return ano;
    }
    void Data::Avanca(){
        
        cout << "Data do sistema: " << endl;
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        printf ( "Data atual do sistema é: %s", asctime (timeinfo) );
        
        if(dia < 30){
            dia += 1;
            cout << "Data atualizada: " << endl;
            cout << dia << "/" << mes << "/" << ano << endl;
        }else{
            dia = 1;
            mes += 1;
            cout << "Data atualizada: " << endl;
            cout << dia << "/" << mes << "/" << ano << endl;
        }
        
        if(mes > 12){
            dia = 1;
            mes = 1;
            ano += 1;
            cout << "Data atualizada: " << endl;
            cout << dia << "/" << mes << "/" << ano << endl;
        }
    }