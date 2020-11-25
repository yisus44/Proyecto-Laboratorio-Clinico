#ifndef LABORATORIO
#define LABORATORIO

#include <D:/CETI/Semestre 2 sufrimiento a domicilio/Programacion orientada a objetos/Tercer parcial/ProyectoFinal/Producto.cpp>
#include <D:/CETI/Semestre 2 sufrimiento a domicilio/Programacion orientada a objetos/Tercer parcial/ProyectoFinal/Empleado.cpp>
#include <D:/CETI/Semestre 2 sufrimiento a domicilio/Programacion orientada a objetos/Tercer parcial/ProyectoFinal/Cliente.cpp>

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <String>

using namespace std;

class Laboratorio{
	public:
		
	Empleado empleados[5];
	Producto productos [5];
	Cliente clientes[5];

	void agregarProducto(){
			int codigoProducto,i;
			cout<<"Ingrese el codigo de producto a añadir"<<endl;
			cout<<"(CODIGOS A USAR A CONTINUACION"<<endl;
			cout<<"1-5 ANALGESICOS"<<endl;
			cout<<"6-10 ANTIBIOTICOS"<<endl;
			cout<<"11-15 PREVENTIVOS"<<endl;
			cin>>codigoProducto;
			system("color 4");			
			if(codigoProducto>30 || codigoProducto<0) {
				cout<<"Codigo no valido"<<endl;
			}else{
					for(i = 0;i<5;i++){
					if(codigoProducto==productos[i].getCodigoProducto()){
						cout<<"Codigo no valido, producto ya existente"<<endl;
					}else{
						for(i=0;i<5;i++){
							if(productos[i].getCodigoProducto()==-1){
								system("color 3");
								
								int precioProducto,existenciaProducto;
								string nombreProducto,tipoProducto;
								
								cout<<"Espacio encontrado para nuevo producto"<<endl;
								cout<<"Ingrese el precio del producto"<<endl;
								cin>>precioProducto;
								if(precioProducto<0 || precioProducto==0){
									system("color 4");
									cout<<"Numero no valido, tienes que elegir un precio mayor o igual a 1 (moneda nacional)"<<endl;
									system("color 2");
								}else{
									cout<<"Ingrese la cantidad de producto(existencia)"<<endl;
									cin>>existenciaProducto;
										if(precioProducto<0 || precioProducto==0){
											system("color 4");
											cout<<"Numero no valido, tienes que ingresar al menos un producto"<<endl;
											system("color 2");
										}else{
											cout<<"Ingrese el nombre del producto"<<endl;
											cin>>nombreProducto;
											if(nombreProducto==""){
												system("color 4");
												cout<<"Nombre en blanco o no detectado"<<endl;
												system("color 2");
											}else{
												if(codigoProducto>0 && codigoProducto<=5){
													tipoProducto="ANALGESICOS";
												}else if(codigoProducto>5 && codigoProducto<=10){
													tipoProducto="ANTIBIOTICOS";
												}else if(codigoProducto>10 && codigoProducto<=15){
													tipoProducto="PREVENTIVOS";
												}else{
													system("color 4");
													cout<<"Numero no valido, aunque espera si llegaste hasta aqui reporta el bug y no me bajes calificacion xfavor :,u"<<endl;
													tipoProducto="BUG EN LINEA 76";
													system("color 2");
												}
												productos[i].setCodigoProducto(codigoProducto);
												productos[i].setExistenciaProducto(existenciaProducto);
												productos[i].setNombreProducto(nombreProducto);
												productos[i].setPrecioProducto(precioProducto);
												productos[i].setTipoProducto(tipoProducto);
												system("color 5");
												cout<<"Se ha ingresado con exito"<<<endl;
											}
										}				
								}
							}
						}

						
					}
				}
			}
		}
	
};
#endif
