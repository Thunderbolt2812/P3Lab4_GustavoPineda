#ifndef PODUCTOS_HPP
#define PRODUCTOS_HPP
#include<string>
#include<iostream>
using namespace std;
class productos {
  private:
  long id;
  string nombre;
  int cant;
  string categoria;
  double precio;
  public:
  productos();  
  productos(long,string,int,string,double);
  ~productos();
  long getId();
  string getNombre();
  int getCant();
  string getCategoria();
  double getPrecio();
  void setId(long);
  void setNombre(string);
  void setCant(int);
  void setCategoria(string);
  void setPrecio(double);
};
#endif
