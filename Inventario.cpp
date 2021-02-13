#include<string>
#include "Inventario.hpp"
Inventario::Inventario(){
}

Inventario::Inventario(vector<Producto*>Productos,vector<string>Categorias){
  this->Productos = Productos;
  this->Categorias = Categorias;
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

void Inventario::eliminarProducto(int pos){
	Productos.erase(Productos.begin()+pos);
	delete Productos.at(pos);
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
		Producto* P =Productos.at(i);
		cout<<"Producto # "<<i+1<<endl;
		cout<<"ID: "<<P->getId()<<endl;
		cout<<"Nombre: "<<P->getNombre()<<endl;
		cout<<"Cantidad de Unidades: "<<P->getCantidad()<<endl;
		cout<<"Categoria: "<<P->getCategoria()<<endl;
		cout<<"Precio: "<<P->getPrecio()<<endl;
		cout<<endl;
	}
	cout<<endl;
}
void Inventario::listarProductos(){
	vector<Producto*>unicos;
	double acumPrecioCategoria;
	int acumProductosCategoria;
	cout<<"-----Inventario-----"<<endl;
	for(int i = 0;i<Productos.size();i++){
		Producto* P = Productos.at(i);
		string categoriaProducto = P->getCategoria();
		cout<<"Producto # "<<i+1<<endl;
		cout<<"Unidades: "<<P->getCantidad()<<endl;
		cout<<"Precio Total: "<<(P->getCantidad()*P->getPrecio())<<endl;
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
				acumPrecioCategoria+=P2->getPrecio()*P2->getCantidad();
			}
		}
		cout<<"Precio Total por Categoria: "<<acumPrecioCategoria<<endl;
		for(int j = 0;j<Productos.size();j++){
			Producto* P3 = Productos.at(j);
			string categoria_temp3 = P3->getCategoria();
			if(categoriaProducto==categoria_temp3){
				unicos.push_back(P3);
			}
		}
		
		for(int c = 0;c<Productos.size();c++){
			Producto* P4 = Productos.at(c);
			string nombreTemp = P4->getNombre();
			if(unicos.empty()){
				unicos.push_back(P4);
			}
			for(int b = 0;b<unicos.size();b++){
				Producto* P5 = unicos.at(b);
				string nombreTemp2 = P5->getNombre();
				if(nombreTemp.compare(nombreTemp2)!=0){
					unicos.push_back(P4);
				}
			}
		}
		int contUnicos = 0;
		for(int v =0;v<unicos.size();v++){
			contUnicos++;
		}
		cout<<"Productos Unicos: "<<contUnicos;
		cout<<endl;
		cout<<endl;
	}
	cout<<endl;
}

void Inventario::buscarNombre(string nombre){
	for(int j = 0;j < Productos.size();j++){
		Producto* P6 = Productos.at(j);
		string nombreProductoTemp = P6->getNombre();
		if(nombreProductoTemp.find(nombre) != string::npos){
			cout<<P6->getNombre()<<endl;
		}
	}
}



