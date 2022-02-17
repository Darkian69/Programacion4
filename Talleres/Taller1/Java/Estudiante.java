import java.util.Scanner;
public class Estudiante{

  public String nombre;
  public int [] notas = new int[5];
  public float promedio;

  public Estudiante(String nombre_, float promedio_){
    nombre = nombre_;
    promedio = promedio_;

  }

  public Estudiante(){
    nombre = "";
    promedio = 0;

  }

  public Estudiante(String nombre_){
    nombre = nombre_;
    promedio = 0;

  }

  public void ingresarNotas(){
    Scanner sc = new Scanner(System.in);
    System.out.println("Ingrese el nombre de estudiante: ");
    nombre = sc.nextLine();
    for(int i=0;i<5;i++){
      System.out.println("Ingrese nota " + (int) (i+1));
      notas[i] = sc.nextInt();
    }
  }
  public void calcularPromedio(){
    for(int i=0;i<5;i++){
      promedio += notas[i];
    }
    promedio /= 5;
  }
  public void imprimirNotas(){
    System.out.println("Nombre: " + nombre);
    calcularPromedio();
    System.out.println("Promedio: " + promedio);
  }

}
