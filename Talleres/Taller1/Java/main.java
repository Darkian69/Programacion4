
public class main {
  public static void main(String[] args){


    // Ejercicio 1
    // Clientes c1 = new Clientes();
    // Clientes c2 = new Clientes();
    // Clientes c3 = new Clientes();
    //
    // System.out.println("Cliente 1:");
    // c1.leerCliente();
    // System.out.println("Cliente 2:");
    // c2.leerCliente();
    // System.out.println("Cliente 3:");
    // c3.leerCliente();
    //
    // System.out.println("Cliente 1: ");
    // c1.mostrarCliente();
    // System.out.println("Cliente 2: ");
    // c2.mostrarCliente();
    // System.out.println("Cliente 3: ");
    // c3.mostrarCliente();

  // Ejercicio 2
  // Triangulo t1 = new Triangulo(10, 20, 30, 12, 10);
  // Triangulo t2 = new Triangulo(21, 30, 12, 30, 12);
  // Triangulo t3 = new Triangulo(15, 25, 10, 20, 30);
  // Triangulo t4 = new Triangulo(12, 31, 23, 11, 14);
  //
  // System.out.println("Triangulo 1: ");
  // System.out.println("Area: " + t1.area());
  // System.out.println("Perimetro: " + t1.perimetro());
  //
  // System.out.println("Triangulo 2: ");
  // System.out.println("Area: " + t2.area());
  // System.out.println("Perimetro: " + t2.perimetro());
  //
  // System.out.println("Triangulo 3: ");
  // System.out.println("Area: " + t3.area());
  // System.out.println("Perimetro: " + t3.perimetro());
  //
  // System.out.println("Triangulo 4: ");
  // System.out.println("Area: " + t4.area());
  // System.out.println("Perimetro: " + t4.perimetro());


  //Ejercicio 3
  Cilindro [] cl = new Cilindro[6];
  cl[0] = new Cilindro(10, 2);
  cl[1] = new Cilindro(15, 9);
  cl[2] = new Cilindro(20, 10);
  cl[3] = new Cilindro(5, 12);
  cl[4] = new Cilindro(8, 9);
  cl[5] = new Cilindro(12, 4);

  for (int i = 0; i<6;i++){
    System.out.println("Cilindro " + (int) (i+1));
    cl[i].mostrar();
  }


  }


}
