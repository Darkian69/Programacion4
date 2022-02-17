import java.util.Scanner;
public class Producto{

  public String id;
  public String nombre;
  public int precio;
  public int cantidad;
  public int precioTotal;

  public Producto(String id_, String nombre_, int precio_, int cantidad_, int precioTotal_){
    id = id_;
    nombre = nombre_;
    precio = precio_;
    cantidad = cantidad_;
    precioTotal = precioTotal_;
  }

  public Producto(){
    id = "";
    nombre = "";
    precio = 0;
    cantidad = 0;
    precioTotal = 0;
  }

  public Producto(String id_, String nombre_, int precio_ ){
    id = id_;
    nombre = nombre_;
    precio = precio_;
    cantidad = 1;
    precioTotal = precio * cantidad;
  }

  public void ingresarProducto(){
    Scanner sc = new Scanner(System.in);
    System.out.println("Ingrese id del producto:");
    id = sc.nextLine();
    System.out.println("Ingrese nombre del producto: ");
    nombre = sc.nextLine();
    System.out.println("Ingrese Precio del producto: ");
    precio = sc.nextInt();
    System.out.println("Ingrese cantidad del producto: ");
    cantidad = sc.nextInt();
  }

  public int getPrecio(){
    System.out.println(cantidad+precio);
    precioTotal = cantidad*precio;
    return precioTotal;
  }

}
