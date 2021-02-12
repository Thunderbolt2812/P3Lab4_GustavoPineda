#include "Inventario.hpp"
Inventario::Inventario(){
}

Inventario::Inventario(vector<Producto*>_Productos,vector<string>_Categorias){
  this->Productos = _Productos;
  this->Categorias = _Categorias;
}

Inventario::~Inventario(){
	for(int i = 0; i<Productos.size();i++){
		delete Productos.at(i);
	}
    cout << "Destruccion de Inventario Muahahahaha >:-° " << endl;
}

vector<Producto*> Inventario::getInventario(){
  return this->Productos;
}

void Inventario::agregarProducto(Producto* _producto){
  Productos.push_back(_producto);
}
vector<string> Inventario::getCategorias(){
  return this->Categorias;
}

void Inventario::agregarCategoria(string _categoria){
  Categorias.push_back(_categoria);
}

void Inventario::eliminarProducto(Producto* _producto){
	for(int i = 0;i<Productos.size();i++){
		if(_producto==Productos.at(i)){
			Productos.erase(Productos.begin()+i);
			delete Productos.at(i);
		}
	}
}

Producto* Inventario::buscarProducto(Producto* _producto){
	long id_temp =_producto->getId();
	for(int i = 0;i<Productos.size();i++){
		Producto* temp = Productos.at(i);
		long id_temp2 = temp->getId();
		if(id_temp==id_temp2){
			return Productos.at(i);
		}
	}
}

void Inventario::mostrarProductos(){
	cout<<"-----Inventario-----"<<endl;
	for(int i = 0;i<Productos.size();i++){
		cout<<i+1<<") "<<Productos.at(i)<<endl;
	}
	cout<<endl;
}
void Inventario::listarProductos(){
	double acumPrecioCategoria;
	int acumProductosCategoria;
	cout<<"-----Inventario-----"<<endl;
	for(int i = 0;i<Productos.size();i++){
		Producto* P = Productos.at(i);
		string categoriaProducto = P->getCategoria();
		cout<<"Producto # "<<i+1<<endl;
		cout<<"ID: "<<P->getId()<<endl;
		cout<<"Unidades: "<<P->getCantidad()<<endl;
		cout<<"Precio Total: "<<(P->getCantidad()*P->getPrecio());
		for(int j = 0;j<Categorias.size();j++){
			string categoria_temp = Categorias.at(i);
			if(categoriaProducto==categoria_temp){
				acumProductosCategoria++;
			}
		}
		cout<<"Total de Productos en Categoria "<<categoriaProducto<<": "<<acumProductosCategoria<<endl;
		for(int j = 0;j<Productos.size();j++){
			Producto* P2 = Productos.at(j);
			string categoria_temp2 = P2->getCategoria();
			if(categoriaProducto==categoria_temp2){
				acumPrecioCategoria+=P2->getPrecio();
			}
		}
		cout<<"Precio Total por Categoria: "<<acumPrecioCategoria<<endl;
	}
	cout<<endl;
}



