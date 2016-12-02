#include "Cita.h"

#include <string>

using std::string;

Cita::Cita(){}

Cita::Cita(string dia, string descripcion){
	this->dia=dia;
	this->descripcion=descripcion;
}

string Cita::getDia(){
	return dia;
}

string Cita::getDescripcion(){
	return descripcion;
}

void Cita::setDia(string dia){
	this->dia=dia;
}


void Cita::setDescripcion(string descripcion){
	this->descripcion=descripcion;
}
