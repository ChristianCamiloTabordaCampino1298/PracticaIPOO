#ifndef HISTORIA_H
#define HISTORIA_H

#include "Enfermedad.h"
#include "Cita.h"
#include "Medicamento.h"

#include <vector>
using std::vector;

class Historia{
	private:
		vector <Enfermedad*> enfermedades;
		vector <Cita*> citas;
		vector <Medicamento*> medicamentos;
	public:
		Historia();
		void ingresarEnfermedad(Enfermedad * E);
		void ingresarCita(Cita * C);
		void ingresarMedicamento(Medicamento * M);
		~Historia();
		string getNombreE(int posicion);
		string getDescripcionE(int posicion);
		string getDiaC(int posicion);
		string getDescripcionC(int posicion);
		string getNombreM(int posicion);
		int getDosisM(int posicion);
		void setNombreE(int posicion, string nombreE);
		void setDescripcionE(int posicion, string descripcionE);
		void setDiaC(int posicion, string diaC);
		void setDescripcionC(int posicion, string descripcionC);
		void setNombreM(int posicion, string nombreM);
		void setDosisM(int posicion, int dosisM);
};

#endif
