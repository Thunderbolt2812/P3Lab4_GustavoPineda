#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP
#include<vector>
#include<iostream>
#include "Producto.hpp"
using namespace std;
class Inventario {
	private:
		vector<Producto*> Productos;
		vector<string> Categorias;
	public:
		Inventario();  
		Inventario(vector<Producto*>,vector<string>);
	    ~Inventario();
	  	vector<Producto*> getInventario();
	  	vector<string> getCategorias();
	  	void agregarProducto(Producto*);
	  	void agregarCategoria(string);	  	
};
#endif
