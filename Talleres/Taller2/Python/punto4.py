#punto 4
from punto3 import Fecha

class Empleado:
    def __init__(self):
        self.nombre = " "
        self.sexo = " "
        self.fechaNacimiento = " "
        self.fechaContratacion = " "

    def leerDatos(self):
        self.nombre = input("Ingrese el nombre: ")
        self.sexo = input("Ingrese el sexo: ")
        self.fechaNacimiento = input("Ingrese fecha de nacimiento: ")
        self.fechaContratacion = input("Ingrese fecha de contratacion: ")

    def calcularEdad(self):
        edad = Fecha(self.fechaNacimiento, "01/03/2022")
        return round(edad.calcularDiferencia() / 365)

class Empresa:
    def __init__(self):
        self.empleados = []
        self.edades = list()

    def ingresarEmpleados(self):
        for i in range(3):
            self.empleados.append(Empleado())
        for i in self.empleados:
            i.leerDatos()
    # 3 5 1
    #3 1 5

    def calcularEdades(self):
        for i in self.empleados:
            self.edades.append(i.calcularEdad())

    def calcularJoven(self):
        self.calcularEdades()
        menor = min(self.edades)
        pos = self.edades.index(menor)
        print("El empleado mas joven es: " + self.empleados[pos].nombre)

    def calcularMayor(self):
        self.calcularEdades()
        mayor = max(self.edades)
        pos = self.edades.index(mayor)
        print("El empleado mayor es: " + self.empleados[pos].nombre)



xd = Empresa()
xd.ingresarEmpleados()
xd.calcularJoven()
xd.calcularMayor()
