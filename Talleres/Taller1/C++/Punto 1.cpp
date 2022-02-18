    #include<iostream>
    #include<stdlib.h>
    #include <vector>

    using namespace std;

    class Persona{
	    private: //atributos
	        string nombres;
	        string apellidos;
	        string documento;
	        int edad;

	    public: //metodos
	        //el constructor ayuda a inicializar los atributos y lleva el mismo nombre de la clase
	        Persona(const string nombres, string apellidos, string documento, int edad);
	        Persona(const string nombres, string apellidos, string documento);
	        Persona(const string nombres, string apellidos);

			void Imprimir();
	};

    //inicializar el constructor
    Persona::Persona(const string _nombres, string _apellidos, string _documento) {
        this -> nombres = _nombres;
        this -> apellidos = _apellidos;
        this -> documento = _documento;
    }
    //Inicializo el Metodo Imprimir
    void Persona::Imprimir() {
		cout << "Nombres: " << this -> nombres << endl;
		cout << "Apellidos: " << this -> apellidos << endl;
		cout << "Documento: " << this -> documento << endl;
    }

    vector<Persona> Clientes;

    void Cargar_Informacion() {
    	string nombre;
        string apellido;
        string documento;

    	cout << "CARGANDO CLIENTES"<< endl << endl;
    	for (int i=1; i<=3; i++) {

			cout << "Cliente: 0"<< i << endl;
	        cout << "Ingrese los siguientes datos: " << endl;
	        cout << "Nombres: ";
	        cin >> nombre;
	        cout << "Apellidos: ";
	        cin >> apellido;
	        cout << "Documento: ";
	        cin >> documento;

	        Persona Cliente = Persona(nombre, apellido, documento);
	        Clientes.push_back(Cliente);

			cout << endl;
		}
	}

	void Imprimir_Informacion() {

		cout << "IMPRIMIENDO CLIENTES"<< endl;
		for (int i=0; i<Clientes.size(); i++)
		{
		    cout << endl << "Cliente: "<< i << endl;
		    Clientes[i].Imprimir();
		}
		system("pause");
	}

    int main(){

		int opcion;
 		do {
 			system("cls");
	 		cout << "CLIENTES DE MI TIENDA"<< endl << endl;
 			cout << "1. Leer"<< endl;
 			cout << "2. Imprimir"<< endl;
 			cout << "0. Salir"<< endl;

	        cout << endl << "Selecciona una opcion: ";
			cin>> opcion;

			system("cls");
			if (opcion == 1) {
				Cargar_Informacion();
			}
			else if (opcion == 2) {
				Imprimir_Informacion();
			}

		} while (opcion > 0);


        return 0;
    }
