#include <iostream>
#include <vector>
#include "Producto.hpp"
#include "Inventario.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int opcion1 = 0;
	while(opcion1!=4){
		cout << "Bem Vindo" << endl;
		cout<< "Ingrese una opcion"<<endl;
		cout<<"1) Mantenimiento"<<endl;
		cout<<"2) Estadisticas"<<endl;
		cout<<"3) Busqueda"<<endl;
		cout<<"4) Salir Corriendo"<<endl;
		cout << "Opcion: ";
    	cin >> opcion1;
    	switch(opcion1){
    		case 1:{
    			int opcion2 = 0;
    			while(opcion2!=3){
    				cout<< "Ingrese una opcion"<<endl;
					cout<<"1) Agregar Producto"<<endl;
					cout<<"2) Modificar un Producto"<<endl;
					cout<<"3) Eliminar un Producto"<<endl;
					cout<<"4) Regresar al Menu anterior"<<endl;
					cout<<"Opcion: ";
					cin>>opcion2;
					switch(opcion2){
						case 1:{
							Inventario* I = new Inventario();
							Producto* P = new Producto();
							long id;
							int cantidad;
							double precio;
					        string categoria,nombre;
					        cout << "Id: " << endl;
					        cin >> id;
					        for(int i = 0;i<I->getInventario().size();i++){
					        	P = I->getInventario().at(i);
					        	long id_aux = P->getId();
					        	if(id==id_aux){
					        		cout<<"El id ya existe porfavor ingrese un id unico: "<<endl;
					        		cout<<"Id: ";
					        		cin>>id;
								}
							}
					        cout << "Nombre: " << endl;
					        cin >> nombre;
					        cout << "Cantidad: " << endl;
					        cin >> cantidad;
					        while(cantidad<=0){
					        	cout<<"Cantidad del producto no puede ser 0 o un numero negativo"<<endl;
					        	cout<<"Cantidad"<<endl;
					        	cin>>cantidad;
							}
					        cout << "Categoria: " << endl;
					        cin >> categoria;
					        cout << "Precio: " << endl;
					        cin >> precio;
							I -> agregarProducto(new Producto(id,nombre,cantidad,categoria,precio));
							break;
						}
						case 2:{
							
							break;
						}
						case 3:{
							
							break;
						}
					}
				}
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
		}
	}
	return 0;
}
