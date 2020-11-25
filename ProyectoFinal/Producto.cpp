#ifndef PRODUCTO
#define PRODUCTO

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <String>

using namespace std;

class Producto{
		int codigoProducto;
		string nombreProducto;
		int precioProducto;
		string tipoProducto;
		int existenciaProducto;
		
	public:
		//constructor para dejar valores default
		Producto(){
			this->codigoProducto=-1;
			this->nombreProducto="";
			this->precioProducto=0;
			this->existenciaProducto=0;
			this->tipoProducto="";
		}
		//getters y setters
		string getNombreProducto(){
			return nombreProducto;
		}
		
		void setNombreProducto(string nombreProducto){
			this->nombreProducto=nombreProducto;
		}
		
		string getTipoProducto(){
			return tipoProducto;
		}
		
		void setTipoProducto(string tipoProducto){
			this->tipoProducto=tipoProducto;
		}
		
		int getExistenciaProducto(){
			return existenciaProducto;
		}
		
		void setExistenciaProducto(int existenciaProducto){
			this->existenciaProducto=existenciaProducto;			
		}
		
		int getCodigoProducto(){
			return codigoProducto;
		}
		
		void setCodigoProducto(int codigoProducto){
			this->codigoProducto=codigoProducto;			
		}
		
		int getPrecioProducto(){
			return precioProducto;
		}
		
		void setPrecioProducto(int precioProducto){
			this->precioProducto=precioProducto;			
		}
				
};

#endif
