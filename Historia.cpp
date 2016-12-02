#include "Historia.h"

Historia::Historia(){}

Historia::~Historia(){
	for(int x=0; x<enfermedades.size(); x++){
		delete enfermedades[x];
		enfermedades[x] = 0;
		enfermedades.erase(enfermedades.begin() + x);
	}
	for(int x=0; x<citas.size(); x++){
		delete citas[x];
		citas[x] = 0;
		citas.erase(citas.begin() + x);
	}
	for(int x=0; x<medicamentos.size(); x++){
		delete medicamentos[x];
		medicamentos[x] = 0;
		medicamentos.erase(medicamentos.begin() + x);
	}
}

string Historia::getNombreE(int posicion){
	return enfermedades[posicion]->getNombre();
}

string Historia::getDescripcionE(int posicion){
	return enfermedades[posicion]->getDescripcion();
}

string Historia::getDiaC(int posicion){
	return citas[posicion]->getDia();
}

string Historia::getDescripcionC(int posicion){
	return citas[posicion]->getDescripcion();
}

string Historia::getNombreM(int posicion){
	return	medicamentos[posicion]->getNombre();
}

int Historia::getDosisM(int posicion){
	return medicamentos[posicion]->getDosis();
}

void Historia::setNombreE(int posicion, string nombreE){
	enfermedades[posicion]->setNombre(nombreE);
}

void Historia::setDescripcionE(int posicion, string descripcionE){
	enfermedades[posicion]->setDescripcion(descripcionE);
}

		void setDiaC(int posicion, string diaC);
		void setDescripcionC(int posicion, string descripcionC);
		void setNombreM(int posicion, string nombreM);
		void setDosisM(int posicion, int dosisM);
