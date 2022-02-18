    #include<iostream>
    #include<stdlib.h>
    #include <vector>
    #include <math.h>

    using namespace std;

    #define PI 3.141592


    class Cilindro {
	    private: //atributos
	        float radio;
	        float altura;

	    public: //metodos
	        //el constructor ayuda a inicializar los atributos y lleva el mismo nombre de la clase
	        Cilindro(float radio, float altura);
			void Imprimir_Area();
			void Imprimir_Perimetro();
			void Imprimir_Volumen();
	};
    Cilindro::Cilindro(float _radio, float _altura) {
        this -> radio = _radio;
        this -> altura = _altura;
    }
    void Cilindro::Imprimir_Area() {
		float Area = 2 * PI * this->radio * (this->radio + this->altura);
		cout << "El Area es: " << Area << endl;
    }
    void Cilindro::Imprimir_Perimetro() {
		float Perimetro = 2 * PI * this->radio;
		cout << "El Perimetro es: " << Perimetro << endl;
    }
	void Cilindro::Imprimir_Volumen (){
		float Volumen = PI * pow(this->radio, 2) * this->altura;
		cout << "El Volumen es: " << Volumen << endl;
	}

	vector<Cilindro> lista_cilindros;

    int main(){

		int radio;
		int altura;
		int opcion;
		int pos;

 		do {
 			system("cls");
	 		cout << "AREA, VOLUMEN Y PERIMETRO"<< endl << endl;
 			cout << "1. Agregar Cilindro"<< endl;
 			cout << "2. Imprimir Area del Cilindro"<< endl;
 			cout << "3. Imprimir Perimetro del Cilindro"<< endl;
 			cout << "3. Imprimir Volumen del Cilindro"<< endl;
 			cout << "0. Salir"<< endl;

	        cout << endl << "Selecciona una opcion: ";
			cin>> opcion;

			if (opcion == 1) {
				cout << endl << "Ingrese el Radio: ";
				cin>> radio;
				cout << endl << "Ingrese la Altura: ";
				cin>> altura;

				Cilindro nuevo_cilindro = Cilindro(radio, altura);
				lista_cilindros.push_back(nuevo_cilindro);
			}
			else if (opcion == 2) {

				cout << endl << "De que cilindro desea imprimir el Area: ";
				cin>> pos;

				if (pos <= lista_cilindros.size()) {
					lista_cilindros[pos -1].Imprimir_Area();
				}
				else {
					cout << "Solo existen "<< lista_cilindros.size() << " cilindros";
				}
				system("pause");
			}
			else if (opcion == 3) {

				cout << endl << "De que cilindro desea imprimir el Perimetro: ";
				cin>> pos;

				if (pos <= lista_cilindros.size()) {
					lista_cilindros[pos -1].Imprimir_Perimetro();
				}
				else {
					cout << "Solo existen "<< lista_cilindros.size() << " cilindros";
				}
				system("pause");
			}
			else if (opcion == 4) {

				cout << endl << "De que cilindro desea imprimir el Volumen: ";
				cin>> pos;

				if (pos <= lista_cilindros.size()) {
					lista_cilindros[pos -1].Imprimir_Volumen();
				}
				else {
					cout << "Solo existen "<< lista_cilindros.size() << " cilindros";
				}
				system("pause");
			}


		} while (opcion > 0);

        return 0;
    }
