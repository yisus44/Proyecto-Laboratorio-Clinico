#ifndef CLIENTE
#define CLIENTE

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <String>
#include <D:/CETI/Semestre 2 sufrimiento a domicilio/Programacion orientada a objetos/Tercer parcial/ProyectoFinal/Persona.cpp>

//#include <D:/CETI/Semestre 2 sufrimiento a domicilio/Programacion orientada a objetos/Tercer parcial/ProyectoFinal/Persona.cpp> 

using namespace std;

 class Cliente:public Persona {
 	private:
 		int codigoCliente;
 	public:
 		//constructor para dejar valores default
		Cliente(){
		this->edad=0;
		this->nombre="";
		this->codigoCliente=-1;
		this->domicilio="";
		this->estado="";
		}
 		int getCodigoCliente(){
			return codigoCliente;
		}
		
		void setCodigoCliente(int codigoCliente){
			this->codigoCliente=codigoCliente;
		}
 };
 
 #endif

