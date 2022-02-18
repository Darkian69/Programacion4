#include <iostream>
#include<stdlib.h>
#include <vector>

using namespace std;

class Triangulo{
    private:
        float lado1, lado2, lado3, area, perimetro;
        int lados = 3;
    public:

    Triangulo(){
        lado1 = 0.0;
        lado2 = 0.0;
        lado3 = 0.0;
        area = 0.0;
        perimetro = 0.0;
    }
    Triangulo(float new_lado1,float new_lado2,float new_lado3,float new_area,float new_perimetro){
        lado1 = new_lado1;
        lado2 = new_lado2;
        lado3 = new_lado3;
        area = new_area;
        perimetro = new_perimetro;
    }

    int obtenerLados(){
	    return lados;
    }
    int obtenerArea(){
	    return area;
    }
    int obtenerPerimetro(){
	    return perimetro;
    }
    void cambiarArea(float new_area){
	    area = new_area;
    }
    void cambiarPerimetro(float new_perimetro){
	    perimetro = new_perimetro;
    }

    void imprimir(int option) {
        switch(option) {
            case 1:{
                cout<<"Area: ";
                cout<<area<<endl;
                break;
            }
            case 2:{
                cout<<"Perimetro: ";
                cout<<perimetro<<endl;
                break;
            }
            case 3:{
                cout<<"Area: ";
                cout<<area<<endl;
                cout<<"Perimetro: ";
                cout<<perimetro<<endl;
                break;
            }
            break;
        }
    }

    float obtenerLado(int lado){
        float lado_a_devolver = 0.0;
        switch (lado)
        {
	        case 1:{
	            lado_a_devolver = lado1;
	            break;
	        }
	        case 2:{
	            lado_a_devolver = lado2;
	            break;
	        }
	        case 3:{
	            lado_a_devolver = lado3;
	            break;
	        }

        }
        return lado_a_devolver;
    }
};
void Imprimir_Area(vector<Triangulo> misTriangulos) {
        float Area;

    	cout << "CALCULANDO EL AREA\n\n";

        for (int i=0; i < misTriangulos.capacity(); i++) {

			cout << "Triangulo: 0"<< i << endl;
			cout << "Los lados del triangulo son:  " << endl;
			cout << "Lado-1: ";
			cout << misTriangulos[i].obtenerLado(1)<<endl;
			cout << "Lado-2: ";
			cout << misTriangulos[i].obtenerLado(2)<<endl;
            cout << "Lado-3: ";
            cout << misTriangulos[i].obtenerLado(3)<<endl;

            Area = (misTriangulos[i].obtenerLado(1)*misTriangulos[i].obtenerLado(2))/2;
            misTriangulos[i].cambiarArea(Area);
			misTriangulos[i].imprimir(1);

            cout<<endl;
		}
	}
void Imprimir_Perimetro(vector<Triangulo> misTriangulos) {
        float Perimetro;
    	cout << "CALCULANDO EL PERIMETRO\n\n";

        for (int i=0; i < misTriangulos.capacity(); i++) {

			cout << "Triangulo: 0"<< i << endl;
			cout << "Los lados del triangulo son:  " << endl;
			cout << "Lado-1: ";
			cout << misTriangulos[i].obtenerLado(1)<<endl;
			cout << " Lado-2: ";
			cout << misTriangulos[i].obtenerLado(2)<<endl;
            cout << " Lado-3: ";
            cout << misTriangulos[i].obtenerLado(3)<<endl;

            Perimetro = misTriangulos[i].obtenerLado(1)+misTriangulos[i].obtenerLado(2)+misTriangulos[i].obtenerLado(3);
            misTriangulos[i].cambiarPerimetro(Perimetro);
			misTriangulos[i].imprimir(2);

            cout<<endl;
		}
	}
Triangulo llenarTriangulo(){
    float a,b,c,area,perimetro;
    cout << "--Ingresando los lados de un triangulo-- " << endl;
	cout << "Ingrese la base del triangulo:  ";
	cin >> a;
	cout << "Ingrese uno de los lados del triangulo:  ";
	cin >> b;
    cout << "Ingrese el otro lado del triangulo:  ";
    cin >> c;
    cout<<endl << endl;
    Triangulo miTriangulo = Triangulo(a,b,c,0.0,0.0);
    return miTriangulo;
}

vector<Triangulo> llenarTriangulos(){
    vector<Triangulo> triangulos;
    Triangulo auxTriangle;
    for(int index = 0; index < 4; index++){
        auxTriangle = llenarTriangulo();
        // cout<<"lado 1: "<<auxTriangle.obtenerLado(1)<<" ,Lado 2: "<<auxTriangle.obtenerLado(2)<<" ,Lado 3: "<<auxTriangle.obtenerLado(3)<<endl;
        triangulos.push_back(auxTriangle);
    }
    return triangulos;
}
int main(){

    int opcion;
    vector<Triangulo> misTriangulos;

    cout<<"<-------INGRESE LA INFORMACION DE LOS TRIANGULOS------->"<<endl;
    misTriangulos = llenarTriangulos();
 		do {
 			// system("clear");
	 		cout << "--Area y Perimetro de 4 Triangulos"<< endl << endl;
 			cout << "1. Encontrar el area de los triangulos almacenados"<< endl;
 			cout << "2. Encontrar el perimetro de los triangulos almacenados"<< endl;
 			cout << "0. Salir"<< endl;

	        cout << endl << "Selecciona una opcion: ";
			cin>> opcion;

			system("clear");
			switch(opcion){
                case 1:{
                    //area
                    Imprimir_Area(misTriangulos);
                    break;
                }
                case 2: {
                    //perimetro
                    Imprimir_Perimetro(misTriangulos);
                    break;
                }
                break;
            }

		} while (opcion != 0);
    // system("pause");
    return 0;
}
