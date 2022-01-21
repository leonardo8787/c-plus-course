#ifndef Consulta_hpp
#define Consulta_hpp

using namespace std;

#include<iostream>
#include<vector>
#include<string>

class Consulta{
    private:
    	string data, hora;
    public:
	    Consulta();
		Consulta(string data, string hora);
		void setData(string data);
		string getData();
		void setHora(string hora);
		string getHora();
};

#endif