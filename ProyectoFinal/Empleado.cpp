#ifndef EMPLEADO
#define EMPLEADO

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <String>
#include <D:/CETI/Semestre 2 sufrimiento a domicilio/Programacion orientada a objetos/Tercer parcial/ProyectoFinal/Persona.cpp>

using namespace std;

 class Empleado: public Persona{
 	private:
		
		int codigoEmpleado;
		int RFC;
		string tipoEmpleado;
		int salario;
		
	public:
		//constructor para dejar valores default
		Empleado(){
		this->edad=0;
		this->nombre="";
		this->RFC=0;
		this->codigoEmpleado=-1;
		this->tipoEmpleado="";
		this->salario=0;
		this->domicilio="";
		this->estado="";
		}
		string getTipoEmpleado(){
			return tipoEmpleado;
		}
		
		void setTipoEmpleado(string tipoEmpleado){
			this->tipoEmpleado=tipoEmpleado;
		}
		
		int getCodigoEmpleado(){
			return codigoEmpleado;
		}
		
		void setCodigoEmpleado(int codigoEmpleado){
			this->codigoEmpleado=codigoEmpleado;
		}
		
		int getRFC(){
			return RFC;
		}
		
		void setRFC(int RFC){
			this->RFC=RFC;
		}
		
		int getSalario(){
			return salario;
		}
		
		void setSalario(int salario){
			this->salario=salario;
		}
 };
	
#endif
