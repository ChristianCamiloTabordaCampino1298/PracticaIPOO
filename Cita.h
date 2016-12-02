#ifndef CITA_H
#define CITA_H

#include <string>

using std::string;


class Cita{
	
	private:
	string dia;
	string descripcion;
	
	public:
	
	Cita(string dia, string descripcion);
	string getDia();
	string getDescripcion();
	void setDia(string dia);
	void setDescripcion(string descripcion);

};

#endif
