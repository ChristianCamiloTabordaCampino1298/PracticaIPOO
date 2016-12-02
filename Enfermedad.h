#ifndef ENFERMEDAD_H
#define ENFERMEDAD_H

#include <string>
using std::string;

class Enfermedad{
	private:
		string nombre;
		string descripcion;
	public:
		Enfermedad(string nombre, string descripcion);
		~Enfermedad();
		string getNombre();
		string getDescripcion();
		void setNombre(string nombre);
		void setDescripcion(string descripcion);
};

#endif
