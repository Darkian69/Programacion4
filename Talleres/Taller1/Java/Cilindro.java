import java.lang.Math;
public class Cilindro{
  public float radio;
  public float altura;

  public Cilindro(float r, float h){
    radio = r;
    altura = h;
  }

  public Cilindro(){
    radio = 0;
    altura = 0;
  }

  public Cilindro(float h){
    radio = 1;
    altura = h;
  }

  public float volumen(){
    float result = (float) (Math.pow(radio,2)*altura*3.14);
     return result;
  }

  public float area(){
    float result = (float) (2*3.14*radio*(radio + altura));
    return result;
  }

  public float perimetro(){
    float result = (float) (2*3.14*radio + altura);
    return result;
  }

  public void mostrar(){
    System.out.println("volumen: " + volumen());
    System.out.println("Area: " + area());
    System.out.println("Perimetro: " + perimetro());
  }
}
