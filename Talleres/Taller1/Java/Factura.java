import java.util.ArrayList;
import java.util.Scanner;
public class Factura{

  public int codigo;
  public String fecha;
  ArrayList<Producto> productos = new ArrayList<Producto>();
  public float subtotal;
  public float subtotalIVA;

  public Factura(int codigo_, String fecha_, float subtotal_, float subtotalIVA_){
    codigo = codigo_;
    fecha = fecha_;
    subtotal = subtotal_;
    subtotalIVA = subtotalIVA_;
  }

  public Factura(){
    codigo = 0;
    fecha = "";
    subtotal = 0;
    subtotalIVA = 0;
  }

  public Factura(int codigo_, String fecha_){
    codigo = codigo_;
    fecha = fecha_;
    subtotal = 0;
    subtotalIVA = 0;
  }

  public void ingresarFactura(){
    Scanner sc = new Scanner(System.in);
    System.out.println("Ingrese el codigo de la factura:");
    codigo = sc.nextInt();
    System.out.println("Ingrese la fecha: ");
    sc.nextLine();
    fecha = sc.nextLine();
    System.out.println("Ingrese productos");
    int i = 1;
    int cont = 0; //Contador del numero de Productos
    while(i == 1){
      productos.add(new Producto());
      productos.get(cont).ingresarProducto();
      cont += 1;
      System.out.println("Presione '1' para ingresar un productor.\nPresione '0' para salir.\n");
      i = sc.nextInt();
    }
  }

  public void calcularTotal(){
    for(int i = 0; i < productos.size();i++){
      subtotal += productos.get(i).getPrecio();
    }
    subtotalIVA = (float) (subtotal*1.19);
  }

  public void imprimirFactura(){
    System.out.println("Codigo de factura: " + codigo);
    System.out.println("Fecha: " + fecha);
    System.out.println("Productos: ");
    for(int i = 0; i < productos.size();i++){
      System.out.println(productos.get(i).nombre + "  " + productos.get(i).cantidad + "  $" + productos.get(i).precio);
    }
    calcularTotal();
    System.out.println("Valor total sin IVA: " + subtotal);
    System.out.println("Valor total con IVA: " + subtotalIVA);
  }

}
