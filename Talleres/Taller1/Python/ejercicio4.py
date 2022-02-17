#ejercicio 4
#4. Construir un programa que permita ingresar los datos de los productos en 5 facturas
#diferentes y muestre el subtotal y el total del valor incluyendo el IVA.
import os
class producto:
    def __init__(self):
        self.id = ""
        self.nombre = ""
        self.precio = 0
        self.cantidad = 0
        self.precioTotal = 0

    def ingresarProducto(self):
        self.id = int(input("Ingrese id del producto: "))
        self.nombre = input("Ingrese nombre del producto: ")
        self.precio = int(input("Ingrese el precio del producto: "))
        self.cantidad = int(input("Ingrese la cantidad del producto: "))

    def getPrecio(self):
        self.precioTotal = self.precio*self.cantidad
        return self.precioTotal


class factura:
    def __init__(self):
        self.codigo = " "
        self.fecha = " "
        self.caja = " "
        self.subtotal = 0
        self.subtotalIVA = 0
        self.productos = []

    def ingresarFactura(self):
        self.codigo = input("Ingrese el codigo de la factura: ")
        self.fecha = input("Ingrese la fecha de la factura: ")
        self.caja = input("Ingrese el numero de caja: ")
        print("Ingrese productos: ")
        i = 1
        cont = 0  #Contador de productos
        while i == 1:
            self.productos.append(producto())
            self.productos[cont].ingresarProducto()
            cont += 1
            i = int(input("Presione '1' para ingresar un productor.\nPresione '0' para salir.\n"))
            os.system ("clear")

    def calcularTotal(self):
        for i in self.productos:
            self.subtotal += i.getPrecio()
        self.subtotalIVA = self.subtotal*1.19

    def imprimirFactura(self):
        print("Codigo de Factura: ", self.codigo)
        print("Fecha: ", self.fecha)
        print("Caja: ", self.caja)
        print("Productos: ")
        for i in self.productos:
            print(i.nombre + "  "+ str(i.cantidad) + "  $" + str(i.precio))
        self.calcularTotal()
        print("Valor total sin IVA: " + str(self.subtotal))
        print("Valor total con IVA: " + str(self.subtotalIVA))



facturas = []
for i in range(5):
    facturas.append(factura())
j = 1
for i in facturas:
    print("Factura N°", j)
    i.ingresarFactura()
    j += 1
j = 1
for i in facturas:
    print("Factura N°", j)
    i.imprimirFactura()
    j +=1
