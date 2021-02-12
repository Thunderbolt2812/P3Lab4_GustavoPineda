#include "productos.hpp"

productos::productos(){
}

productos::productos(long i,string n,int c, string cat, double p){
  this->id = i;
  this->nombre = n;
  this->cant = c;
  this->categoria = cat;
  this->precio = p;
}

productos::~productos(){
  cout << "Destruccion de Inventario Muahahahaha >:-° " << endl;
}

long productos::getId(){
  return this->id;
}

void productos::setId(long i){
  this->id = i;
}

string productos::getNombre(){
  return this->nombre;
}

void productos::setNombre(string n){
  this->nombre = n;
}

int productos::getCant(){
  return this->cant;
}

void productos::setCant(int c){
  this->cant = c;
}

string productos::getCategoria(){
  return this->categoria;
}

void productos::setCategoria(string cat){
  this->categoria = cat;
}

double productos::getPrecio(){
  return this->precio;
}

void productos::setPrecio(double p){
  this->precio = p;
}
