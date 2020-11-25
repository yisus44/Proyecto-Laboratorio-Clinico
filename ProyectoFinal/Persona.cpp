#ifndef PERSONA
#define PERSONA

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <String>

using namespace std;

class Persona{
	protected:
		string nombre;
		string domicilio;
		int edad;
		string estado;
	public:	
		string getNombre(){
			return nombre;
		}
		
		void setNombre(string nombre){
			this->nombre=nombre;
		}
		
		string getEstado(){
			return estado;
		}
		
		void setEstado(string estado){
			this->estado=estado;
		}
		
		int getEdad(){
			return edad;
		}
		
		void setEdad(int edad){
			this->edad=edad;
		}
			
		string getDomicilio(){
			return domicilio;
		}
		
		void setDomicilio(string domicilio){
			this->domicilio=domicilio;
		}
		

};
#endif
