#include "Enfermedad.h"

Enfermedad::Enfermedad(string nombre, string descripcion){
	this->nombre = nombre;
	this->descripcion = descripcion;
}

Enfermedad::~Enfermedad(){}

string Enfermedad::getNombre(){
	return nombre;
}

string Enfermedad::getDescripcion(){
	return descripcion;
}

void Enfermedad::setNombre(string nombre){
	this->nombre = nombre;
}

void Enfermedad::setDescripcion(string descripcion){
	this->descripcion = descripcion;
}


