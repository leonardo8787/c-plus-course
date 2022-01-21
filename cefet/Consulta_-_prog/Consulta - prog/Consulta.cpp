#include "Consulta.hpp"

	Consulta::Consulta(){}
	Consulta::Consulta(string data, string hora){

	}
	void Consulta::setData(string data){
		this->data=data;
	}
	string Consulta::getData(){
		return this->data;
	}
	void Consulta::setHora(string hora){
		this->hora=hora;
	}
	string Consulta::getHora(){
		return this->hora;
	}
