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
    	cout<<endl;
    	switch(opcion1){
    		case 1:{
    			int opcion2 = 0;
    			while(opcion2!=4){
    				cout<< "Ingrese una opcion"<<endl;
					cout<<"1) Agregar Producto"<<endl;
					cout<<"2) Modificar un Producto"<<endl;
					cout<<"3) Eliminar un Producto"<<endl;
					cout<<"4) Regresar al Menu anterior"<<endl;
					cout<<"Opcion: ";
					cin>>opcion2;
					cout<<endl;
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
					        	cout<<"Cantidad: "<<endl;
					        	cin>>cantidad;
							}
					        cout << "Categoria: " << endl;
					        cin >> categoria;
					        I->agregarCategoria(categoria);
					        cout << "Precio: " << endl;
					        cin >> precio;
					        while(precio<=0){
					        	cout<<"Precio del producto no puede ser 0 o un numero negativo"<<endl;
					        	cout<<"Precio: "<<endl;
					        	cin>>precio;
							}
							I -> agregarProducto(new Producto(id,nombre,cantidad,categoria,precio));
							break;
						}
						case 2:{
							Inventario* I2 = new Inventario();
							Producto* P2 = new Producto();
							int pos1;
							I2->mostrarProductos();
							cout<<"Ingrese la posicion del producto que desea modificar: ";
							cin>>pos1;
							while(pos1<=0){
								cout<<"Posicion invalida"<<endl;
								cout<<"Ingrese la posicion otra vez: ";
								cin>>pos1;
							}
							P2 = I2->getInventario().at(pos1-1);
							int opcion3 = 0;
							while(opcion3!=5){
								cout<<"Ingrese una opcion"<<endl;
								cout<<"1) Modificar Nombre"<<endl;
								cout<<"2) Modificar Cantidad"<<endl;
								cout<<"3) Modificar Categoria"<<endl;
								cout<<"4) Modificar Precio"<<endl;
								cout<<"5) Volver al Menu anterior"<<endl;
								cout<<"Opcion: ";
								cin>>opcion3;
								switch(opcion3){
									case 1:{
										string nuevo_nombre;
										cout<<"Nuevo Nombre: ";
										cin>>nuevo_nombre;
										P2->setNombre(nuevo_nombre);
										break;
									}
									case 2:{
										int nueva_cantidad;
										cout<<"Nueva Cantidad: ";
										cin>>nueva_cantidad;
										while(nueva_cantidad <= 0){
											cout<<"Cantidad del producto no puede ser 0 o un numero negativo"<<endl;
					        				cout<<"Nueva Cantidad: "<<endl;
					        				cin>>nueva_cantidad;
										}
										P2->setCantidad(nueva_cantidad);
										break;
									}
									case 3:{
										string nueva_categoria;
										cout<<"Nueva Categoria: ";
										cin>>nueva_categoria;
										P2->setCategoria(nueva_categoria);
										break;
									}
									case 4:{
										double nuevo_precio;
										cout<<"Nuevo Precio: ";
										cin>>nuevo_precio;
										while(nuevo_precio <= 0){
											cout<<"Precio del producto no puede ser 0 o un numero negativo"<<endl;
					        				cout<<"Nuevo Precio: "<<endl;
					        				cin>>nuevo_precio;
										}
										P2->setPrecio(nuevo_precio);
										break;
									}
								}
							}
							cout<<"Producto modificado exitosamente yay :)"<<endl;
							break;
						}
						case 3:{
							Inventario* I3 = new Inventario();
							Producto* P3 = new Producto();
							int pos2;
							I3->mostrarProductos();
							cout<<"Ingrese la posicion del producto que desea eliminar: ";
							cin>>pos2;
							while(pos2<=0){
								cout<<"Posicion invalida"<<endl;
								cout<<"Ingrese la posicion otra vez: ";
								cin>>pos2;
							}
							P3 = I3->getInventario().at(pos2-1);
							I3->eliminarProducto(P3);
							cout<<"Producto eliminado exitosamente yay :)"<<endl;
							break;
						}
					}
				}
				break;
			}
			case 2:{
				Inventario* IC2 = new Inventario();
				Producto* PC2 = new Producto();
				IC2->listarProductos();
				break;
			}
			case 3:{
				
				break;
			}
		}
	}
	return 0;
}
