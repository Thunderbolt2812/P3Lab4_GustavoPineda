#ifndef PRODUCTO_HPP
#define PRODUCTO_HPP
#include<string>
#include<iostream>
using namespace std;
class Producto {
  private:
	  long id;
	  string nombre;
	  int cantidad;
	  string categoria;
	  double precio;
	public:
	  Producto();  
	  Producto(long,string,int,string,double);
	  ~Producto();
	  long getId();
	  string getNombre();
	  int getCantidad();
	  string getCategoria();
	  double getPrecio();
	  void setId(long);
	  void setNombre(string);
	  void setCantidad(int);
	  void setCategoria(string);
	  void setPrecio(double);
};
#endif
