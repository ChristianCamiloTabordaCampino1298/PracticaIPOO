#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <string>
using std::string;

class Medicamento{
	private:
		string nombre;
		int dosis;
	public:
		Medicamento(string nombre, int dosis);
		~Medicamento();
		string getNombre();
		int getDosis();
		void setNombre(string nombre);
		void setDosis(int dosis);
};

#endif
