    #include<iostream>
    #include<stdlib.h>
    #include <vector>

    using namespace std;

    class Persona{
	    private: //atributos
	        string nombre;
	        string documento;

	    public: //metodos
	        //el constructor ayuda a inicializar los atributos y lleva el mismo nombre de la clase
	        Persona();
	        Persona(const string nombre, string documento);
			void Imprimir();
	};

	class Producto {
	    private: //atributos
	        string codigo;
	        string nombre;
	        int base;
	        int iva;

	    public: //metodos
	        Producto(string codigo, string nombre, int precio);
	        string getNombre() { return nombre; }
			int getPrecio() { return base + iva; }
			bool EsIgual(string _codigo) { return codigo == _codigo; }
			void Imprimir() { cout << "Codigo: " << codigo << ", Nombre: "<< nombre << ", Base Gravada: "<< base << ", IVA: "<< iva <<  endl; }
	};

	class Factura {
		private:
			Persona Cliente;
			vector<Producto> Productos;
		public:
			Factura(const Persona cliente);
			void Agregar_Producto(Producto producto);
			void Imprimir();
	};


    //inicializar el constructor del cliente
    Persona::Persona() {
        this -> nombre = "";
        this -> documento = "";
    }
    Persona::Persona(const string _nombre, string _documento) {
        this -> nombre = _nombre;
        this -> documento = _documento;
    }
    //Inicializo el Metodo Imprimir del Cliente
    void Persona::Imprimir() {
		cout << "Nombre: " << this -> nombre << endl;
		cout << "Documento: " << this -> documento << endl;
    }


    //inicializar el constructor del producto
    Producto::Producto(string _codigo, string _nombre, int _precio) {
        this -> codigo = _codigo;
        this -> nombre = _nombre;
        this -> base = _precio / 1.19;
        this -> iva = _precio - this -> base;
    }


    //inicializar el constructor de la Factura
    Factura::Factura(const Persona _cliente) {
        this -> Cliente = _cliente;
    }
    //Inicializo el Metodo Imprimir de la Factura
    void Factura::Agregar_Producto(Producto producto) {
    	 this->Productos.push_back(producto);
    }
    void Factura::Imprimir() {
    	int TOTAL = 0;
    	this -> Cliente.Imprimir();
    	for (int i=0; i<Productos.size(); i++) {
			Productos[i].Imprimir();
			TOTAL += Productos[i].getPrecio();
		}
		cout << "TOTAL A PAGAR: " << TOTAL << endl;
    }

    vector<Factura> Facturas;
    vector<Producto> productos_disponibles;

    void Agregar_Producto() {
        string codigo;
		string nombre;
        int precio;

    	cout << "AGERGAR UN PRODUCTO"<< endl << endl;

        cout << "Ingrese los datos del producto: " << endl;
        cout << "Codigo: ";
        cin >> codigo;
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Precio: ";
        cin >> precio;

        Producto nuevo_producto = Producto(codigo, nombre, precio);
        productos_disponibles.push_back(nuevo_producto);

		cout << endl;

	}

	Producto *Buscar_Producto(string codigo) {
		for (int i=0; i<productos_disponibles.size(); i++) {
			if (productos_disponibles[i].EsIgual(codigo)) {
				return &productos_disponibles[i];
			}
		}
		return NULL;
	}

    void Crear_Factura() {

    	string nombre;
        string documento;
        string codigo_producto;

    	cout << "CREANDO FACTURA No."<< Facturas.size() << endl << endl;
        cout << "Ingrese los datos del Cliente: " << endl;
        cout << "Nombre Completo: ";
		cin >> nombre;
        cout << "Documento: ";
        cin >> documento;

		Persona cliente = Persona(nombre, documento);
		Factura factura = Factura(cliente);

		cout << "AGREGAR PRODUCTOS A LA FACTURA No"<< Facturas.size() << endl << endl;
		cout << "Ingrese Codigo de Producto o 0 para salir: "<< endl;


		do {
 			cout << endl << "Codigo:";
			cin>> codigo_producto;

			if (codigo_producto != "" && codigo_producto != "0") {
				Producto *retorno = Buscar_Producto(codigo_producto);
				if (retorno != NULL) {
					cout << "Producto: "<< retorno->getNombre() << endl;	
					factura.Agregar_Producto(*retorno);
				}
				else {
					cout << "Codigo No Existe." << endl;
				}
			}

		} while (codigo_producto != "0");

        Facturas.push_back(factura);

	}

	void Imprimir_Factura(int Numero) {

		if (Numero < Facturas.size()) {
			Facturas[Numero].Imprimir();
		}
		else {
			cout << "Factura No Existe." << endl;
		}

		system("pause");
	}

    int main(){

		int opcion;
 		do {
 			system("cls");
	 		cout << "TIENDA EL SAPO"<< endl << endl;
 			cout << "1. Facturar"<< endl;
 			cout << "2. Imprimir Factura"<< endl;
 			cout << "3. Agregar Producto"<< endl;
 			cout << "0. Salir"<< endl;

	        cout << endl << "Selecciona una opcion: ";
			cin>> opcion;

			system("cls");
			if (opcion == 1) {
				Crear_Factura();
			}
			else if (opcion == 2) {
				cout << "Ingrese el numero de factura que desea imprimir: "<< endl;
				cin>> opcion;
				Imprimir_Factura(opcion);
			}
			else if (opcion == 3) {
				Agregar_Producto();
			}

		} while (opcion > 0);


        return 0;
    }
