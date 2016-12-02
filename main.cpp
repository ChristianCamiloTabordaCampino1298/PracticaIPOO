#include "Paciente.h"
#include "Historia.h"
#include "Cita.h"
#include "Enfermedad.h"
#include "Medicamento.h"

#include <fstream>
#include <string>

#include <iostream>

using namespace std;

int main(int arcg, char * argv[]){
	int cedula;
	string nombre;
	string sexo;
	int edad;
	cout << "\nIngrese la cédula del paciente: \n";
	cin >> cedula;
	cout << endl;
	cout << "Ingrese el nombre del paciente: \n";
	cin >> nombre;
	cout << endl;
	cout << "Ingrese el sexo del paciente: \n";
	cin >> sexo;
	cout << endl;
	cout << "Ingrese la edad del paciente: \n";
	cin >> edad;
	cout << endl;
	
	Paciente * P = new Paciente(cedula,nombre,sexo,edad);
	
	int cantidadE;
	int cantidadC;
	int cantidadM;
	
	cout << "Ingrese la cantidad de enfermedades: \n";
	cin >> cantidadE;
	cout << endl;
	
	string nombreE;
	string descripcionE;
	Enfermedad * E = 0;
	Historia * H = new Historia();
	
	for(int x=0; x<cantidadE; x++){
		cout << "Ingrese el nombre de la enfermedad " << (x+1) << ": \n";
		cin >> nombreE;
		cout << endl;
		cout << "Ingrese la descripción de la enfermedad " << (x+1) << ": \n";
		cin >> descripcionE;
		cout << endl;
		E = new Enfermedad(nombreE,descripcionE);
		H->ingresarEnfermedad(E);
	}
	
	cout << "Ingrese la cantidad de citas: \n";
	cin >> cantidadC;
	cout << endl;
	
	string diaC;
	string descripcionC;
	Cita * C = 0;
	
	for(int x=0; x<cantidadC; x++){
		cout << "Ingrese el día de la cita " << (x+1) << ": \n";
		cin >> diaC;
		cout << endl;
		cout << "Ingrese la descripción de la cita " << (x+1) << ": \n";
		cin >> descripcionC;
		cout << endl;
		C = new Cita(diaC, descripcionC);
		H->ingresarCita(C);
	}
	
	cout << "Ingrese la cantidad de medicamentos: \n";
	cin >> cantidadM;
	cout << endl;
	
	string nombreM;
	int dosisM;
	Medicamento * M = 0;
	
	for(int x=0; x<cantidadM; x++){
		cout << "Ingrese el nombre del medicamento " << (x+1) << ": \n";
		cin >> nombreM;
		cout << endl;
		cout << "Ingrese la dosis del medicamento " << (x+1) << ": \n";
		cin >> dosisM;
		M = new Medicamento(nombreM, dosisM);
		H->ingresarMedicamento(M);
	}
	
	char nombreA[50];
	
	cout << "\nIngrese el nombre del archivo a crear: \n";
	cin >> nombreA;
	cout << endl;
	
	ofstream historia(nombreA);
	historia << "\n\tHISTORIA\n\n";
	
	historia << "Paciente: \n\n";
	historia << "Cédula: " << P->getCedula() << ". \n";
	historia << "Nombre: " << P->getNombre() << ". \n";
	historia << "Sexo: " << P->getSexo() << ". \n";
	historia << "Edad: " << P->getEdad() << ". \n\n";
	historia << "Enfermedades: \n\n";
	for(int x=0; x<cantidadE; x++){
		historia << (x+1) << ". " << "Nombre: " << H->getNombreE(x) << ". \n";
		historia << "   " << "Descripción: " << H->getDescripcionE(x) << ". \n";
	}
	historia.close();
	
	return 0;
} 
	
	
	 
	
	 
	
	 
