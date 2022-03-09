#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

class Producto{
public:
  string nombre;
  float precioBase;
  float precioImp;
  vector<string> impuesto;
  vector<float> valorImp;
  vector<int> porcen_imp;
  int numImp;

public:
  Producto(string _nombre, float _precioBase, float _precioImp, vector<string> &_impuesto, vector<float> _valorImp, vector<int> _porcen_imp, int _numImp){
  this -> nombre = _nombre;
  this -> precioBase = _precioBase;
  this -> precioImp = _precioImp;
  this -> impuesto = _impuesto;
  this -> valorImp = _valorImp;
  this -> porcen_imp = _porcen_imp;
  this -> numImp = _numImp;
}

 Producto(string _nombre, float _precioBase) {
   this -> nombre = _nombre;
   this -> precioBase = _precioBase;
   this -> precioImp = _precioBase;
   this -> numImp = 0;
 }

 Producto(){
   this -> nombre = " ";
   this -> precioBase = 0;
   this -> precioImp = 0;
   this -> numImp = 0;
 }



 void Calcular_impuesto(){
   int i = 1;
   while (i == 1) {
     cout << "Ingrese el impuesto: ";
     string imp;
     cin >> imp;
     this -> impuesto.push_back(imp);
     cout << "Ingrese el porcentaje del impuesto: ";
     float porc;
     cin >> porc;
     this -> porcen_imp.push_back(porc);
     //cout << this->precioBase << endl <<this->precioBase * (porc/100);
     this -> valorImp.push_back(this->precioBase * (porc/100));
     this -> precioImp += this->valorImp[numImp];
     this -> numImp++;

     cout << "Ingrese '1' si desea ingresar otro impuesto, ingrese '0' para finalizar. ";
     cin >> i;
   }
 }

 void imprirmirProducto(){
   cout << "Nombre : " << this->nombre << endl;
   cout << "Precio base: .......... $" << this->precioBase << endl;
   cout << "Impuestos: " << endl;
   for (int i=0; i<this->numImp;i++){
     cout << this->impuesto[i] << ".......... $" << this->valorImp[i] << endl;
   }
   cout << "Precio Total .......... $" << this->precioImp << endl;
 }
};

class Comercio{
private:
  vector<Producto> productos;
  int numProd = 0;

public:
  void ingresarProducto(){
    int i = 1;
    while (i == 1){
      cout << "Ingrese nombre del producto: ";
      string nmb;
      cin >> nmb;
      cout << "Ingrese precio del producto: ";
      float prec;
      cin >> prec;
      this->productos.push_back(Producto(nmb, prec));
      this->productos.back().Calcular_impuesto();
      this->numProd++;

      cout << "Presione '1' para ingresar otro producto, presione '0' para finalizar.";
      cin >> i;
    }
  }

  void operar(){
    ingresarProducto();
    system("cls");
    for (int i = 0; i < this->numProd;i++){
      this->productos[i].imprirmirProducto();
    }
  }
};

int main(){
  Comercio ola;
  ola.operar();
  return 0;
}
