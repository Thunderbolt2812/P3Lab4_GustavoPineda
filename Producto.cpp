#include "Producto.hpp"

Producto::Producto(){
}

Producto::Producto(long _id,string _nombre,int _cantidad, string _categoria, double _precio){
  this->id = _id;
  this->nombre = _nombre;
  this->cantidad = _cantidad;
  this->categoria = _categoria;
  this->precio = _precio;
}

Producto::~Producto(){
}

long Producto::getId(){
  return this->id;
}

void Producto::setId(long _id){
  this->id = _id;
}

string Producto::getNombre(){
  return this->nombre;
}

void Producto::setNombre(string _nombre){
  this->nombre = _nombre;
}

int Producto::getCantidad(){
  return this->cantidad;
}

void Producto::setCantidad(int _cantidad){
  this->cantidad= _cantidad;
}

string Producto::getCategoria(){
  return this->categoria;
}

void Producto::setCategoria(string _categoria){
  this->categoria = _categoria;
}

double Producto::getPrecio(){
  return this->precio;
}

void Producto::setPrecio(double _precio){
  this->precio = _precio;
}
