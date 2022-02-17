
public class Triangulo{
  //Primero los atributos
  public int base;
  public int altura;
  public int a;
  public int b;
  public int c;

  //constructores
  public Triangulo(int base_, int altura_, int a_, int b_, int c_){
    base = base_;
    altura = altura_;
    a = a_;
    b = b_;
    c = c_;
  }
  public Triangulo(){
    base = 0;
    altura = 0;
    a = b = c = 0;
  }
  public Triangulo(int base_, int altura_){
  base = base_;
  altura = altura_;
  a = b = c = 0;
  }

//Metodos
public float area(){
  float areaa =(base*altura)/2;
  return areaa;
}

public int perimetro(){
  int perimetroo = a + b + c;
  return perimetroo;
}
}
