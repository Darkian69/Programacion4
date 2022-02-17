import java.util.Scanner;
public class  Clientes{
  //Primero se ponen los atributos en public
  public String nombre;
  public int cedula;
  public int edad;
  public String genero;

  //Luego se hacen los constructores
  //Tienen el mismo nombre de la clase
  public Clientes(String nom, int ced, int ed, String gen) {
    nombre = nom;
    cedula = ced;   //Constructor con parametros
    edad = ed;
    genero = gen;
  }

  public Clientes(){ //Constructor sin parametros
  nombre = "";
  cedula = 0;
  edad = 0;
  genero = "";
}
  public Clientes(String nom, int ced){
    nombre = nom;
    cedula = ced;   //Constructor con la mitad de parametros
    edad = 0;
    genero = "";
  }

//Metodos
public void leerCliente() { //metodo para recibir datos del usuario(teclado)
  Scanner sc = new Scanner(System.in);
  System.out.println("Ingrese nombre del cliente: ");
  nombre = sc.nextLine();
  System.out.println("Ingrese cedula del cliente: ");
  cedula = sc.nextInt();
  System.out.println("Ingres edad del cliente: ");
  edad = sc.nextInt();
  System.out.println("Ingrese genero del cliente: ");
  sc.nextLine();
  genero = sc.nextLine();
}

public void mostrarCliente(){
  System.out.println("Nombre: " + nombre);
  System.out.println("Cedula: " + cedula);
  System.out.println("Edad: " + edad);
  System.out.println("Genero: " + genero);
}

}
