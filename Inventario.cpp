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


