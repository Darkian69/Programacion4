    #include<iostream>
    #include<stdlib.h> 
    using namespace std;
    
    	class Notas{
    		private:
	    		float nota1,nota2,nota3,nota4,nota5;
	    		//float promedio(float nota1,float nota2, float nota3, float nota4, float nota5);
    		public:
    			Notas(float _nota1,float _nota2, float _nota3, float _nota4, float _nota5);
    			float Calcular_Promedio();
		};
	    Notas::Notas(float _nota1,float _nota2, float _nota3, float _nota4, float _nota5){
	    	this -> nota1 = _nota1; 
	    	this -> nota2 = _nota2; 
	    	this -> nota3 = _nota3; 
	    	this -> nota4 = _nota4; 
	    	this -> nota5 = _nota5; 
		}
		float Notas::Calcular_Promedio() {
			    
				return (this->nota1+this->nota2+this->nota3+this->nota4+this->nota5)/5;
				
		}
		
		
		void LeerNotas() {
		
			float nota1, nota2, nota3, nota4, nota5;
			//for (int i=1;i<=5;i++){
				
				cout<<"Ingrese nota 1: ";
				cin>> nota1;
				cout<<"Ingrese nota 2: ";
				cin>> nota2;
				cout<<"Ingrese nota 3:";
				cin>> nota3;
				cout<<"Ingrese nota 4:";
				cin>> nota4;
				cout<<"Ingrese nota 5:";
				cin>> nota5;
			//}
			Notas notas_del_estudinte = Notas(nota1, nota2, nota3, nota4, nota5);
			float promedio = notas_del_estudinte.Calcular_Promedio();
			cout<<"Su promedio es:" << promedio;
		}
		

int main(){

 	LeerNotas(); 
 
	return 0;

}
     	
	    
