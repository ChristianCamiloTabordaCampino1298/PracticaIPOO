#include "Medicamento.h"

Medicamento::Medicamento(string nombre, int dosis){
	this->nombre = nombre;
	this->dosis = dosis;
}

Medicamento::~Medicamento(){}

string Medicamento::getNombre(){
	return nombre;
}

int Medicamento::getDosis(){
	return dosis;
}

void Medicamento::setNombre(string nombre){
	this->nombre = nombre;
}

void Medicamento::setDosis(int dosis){
	this->dosis = dosis;
}

