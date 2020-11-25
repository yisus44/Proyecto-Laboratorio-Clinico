#ifndef MENU
#define MENU


#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;
class Menu{
	public:
		void menuPrincipal(){		
			int opcion=0;
			do{	
			cout<<"Seleccione una opcion"<<endl;
			cout<<"1. Recursos Materiales"<<endl;
			cout<<"2. Control de Personal"<<endl;
			cout<<"3. Manejo de Clientes"<<endl;
			cout<<"4. Salir del Sistema"<<endl;
			cin>>opcion;
				switch(opcion){
					case 1:
					menuRecursosMateriales();
					break;
					
					case 2:
						menuControlPersonal();
					break;
					
					case 3:
						void menuManejoClientes();
					break;
					
					case 4:
						system("exit");
					break;
					
					default:
						system("color 4");
						cout<<"Numero no listado, intentelo de nuevo"<<endl;
						system("color 2");						
						system("pause");

					break;
				}
			}while(opcion != 4);		
		}

		void menuRecursosMateriales(){
			int opcion=0;
			do{	
			cout<<"Seleccione una opcion"<<endl;
			cout<<"1. Dar de alta Productos."<<endl;
			cout<<"2. Buscar un Producto."<<endl;
			cout<<"3. Modificar Precio de un producto."<<endl;
			cout<<"4. Reporte de Analgésicos."<<endl;
			cout<<"5. Reporte de Antibióticos."<<endl;
			cout<<"6. Reporte de Preventivos.."<<endl;
			cout<<"7. Regresar al menu principal."<<endl;
			cin>>opcion;
				switch(opcion){
					case 1:
						
					break;
					
					case 2:
						
					break;
					
					case 3:
						
					break;
					
					case 4:
						
					break;
										
					case 5:
						
					break;	
									
					case 6:
						
					break;	
									
					case 7:
						menuPrincipal();
					break;
					default:
						system("color 64");
						cout<<"Numero no listado, intentelo de nuevo"<<endl;
						system("color 2");						
					break;
				}
			}while(opcion != 7);
		}
		
		void menuControlPersonal(){
			int opcion=0;
			do{	
			cout<<"Seleccione una opcion"<<endl;
			cout<<"1. Agregar un empleado."<<endl;
			cout<<"2. Reporte de empleados."<<endl;
			cout<<"3. Buscar un empleado."<<endl;
			cout<<"4. Modificar Datos de un empleado."<<endl;
			cout<<"5. Eliminar un empleado."<<endl;
			cout<<"6. Agregar un producto."<<endl;
			cout<<"7. Regresar al menú principal"<<endl;
			cin>>opcion;
				switch(opcion){
					case 1:

					break;
					
					case 2:
					break;
					
					case 3:
					break;
					
					case 4:
						
					break;
										
					case 5:
						
					break;	
									
					case 6:
						
					break;	
									
					case 7:
						menuPrincipal();
					break;
					default:
						system("color 64");
						cout<<"Numero no listado, intentelo de nuevo"<<endl;
						system("color 2");						
					break;
				}
			}while(opcion != 7);
		}
		void menuManejoClientes(){
			int opcion=0;

			do{	
			cout<<"Seleccione una opcion"<<endl;
			cout<<"1. Agregar un cliente."<<endl;
			cout<<"2. Buscar un cliente."<<endl;
			cout<<"3. Modificar datos de un cliente."<<endl;
			cout<<"4. Eliminar un cliente"<<endl;
			cout<<"5. Establecer una cita."<<endl;
			cout<<"6. 6. Lista de Citas."<<endl;
			cout<<"7. Reporte de Clientes que solicitaron Examen de Sangre"<<endl;
			cout<<"8. Reporte de Clientes que solicitaron Examen de nivel de Azúcar"<<endl;
			cout<<"9. Reporte de Clientes que solicitaron Examen de Orina."<<endl;
			cout<<"10. Regresar al menú principal"<<endl;
			cin>>opcion;
				switch(opcion){
					case 1:

					break;
					
					case 2:
					break;
					
					case 3:
					break;
					
					case 4:
						
					break;
										
					case 5:
						
					break;	
									
					case 6:
						
					break;
														
					case 7:
						
					break;	
														
					case 8:
						
					break;	
														
					case 9:
						
					break;		
									
					case 10:
						menuPrincipal();
					break;
					default:
						system("color 64");
						cout<<"Numero no listado, intentelo de nuevo"<<endl;
						system("color 2");						
					break;
				}
			}while(opcion != 10);
		}
};
#endif
