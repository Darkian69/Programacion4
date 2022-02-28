


class producto:
    #Constructor
    def __init__(self, nombre, precio):
        self.nombre = nombre
        self.precioBase = int(precio)
        self.precioImp = int(precio)
        self.impuesto = list()
        self.valorImp = list()
        self.porcen_imp = list()
        self.numImp = 0

    def Calcular_impuesto(self):
        i = 1
        while i == 1:
            print("Ingrese el impuesto: ")
            self.impuesto.append(input())
            self.porcen_imp.append(int(input("Ingrese el porcentaje del impuesto: ")))
            self.valorImp.append(self.precioBase * (self.porcen_imp[self.numImp]/100))
            self.precioImp += self.valorImp[self.numImp]
            self.numImp += 1
            i = int(input("Ingrese '1' si desea ingresar otro impuesto: "))

    def imprirmirProducto(self):
        print("Nombre: " + self.nombre)
        print("Precio base: " + ".......... $" + str(self.precioBase))
        print("Impuestos: ")
        for i in range(int(self.numImp)):
            print(self.impuesto[i] + ".......... $" + str(self.valorImp[i]))
        print("Precio total " + ".......... $" + str(self.precioImp))




class comercio:

    def operar(self):
        self.productos = list()
        self.ingresarProducto()
        for i in self.productos:
            i.imprirmirProducto()
            print("\n")

    def ingresarProducto(self):
        i = 1
        cont = 0
        while i == 1:
            nombre = input("Ingrese el nombre del producto: ")
            precio = int(input("Ingrese el precio del producto:" ))
            self.productos.append(producto(nombre, precio))
            self.productos[cont].Calcular_impuesto()
            cont += 1
            i = int(input("Presione '1' para ingresar otro producto."))



cm = comercio()

cm.operar()
