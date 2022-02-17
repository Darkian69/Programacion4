#Ejercicio 5
#Construir un programa que permita leer y promediar las cinco notas de 10 estudiantes
#de programación IV.
import os

class estudiante:
    def __init__(self):
        self.nombre = ""
        self.notas = []
        self.promedio = 0

    def ingresarNotas(self):
        os.system ("clear")
        self.nombre = input("Ingrese nombre del estudiante: ")
        for i in range(5):
            self.notas.append(float(input("Ingrese nota n°" + str(i+1)+ " ")))
        os.system ("clear")

    def sacarPromedio(self):
        promedio = 0
        for i in self.notas:
            promedio += i
        self.promedio = promedio/5

    def imprimirNotas(self):
        print("Nombre: ", self.nombre)
        self.sacarPromedio()
        print("Promedio: ", self.promedio)

estudiantes = []
for i in range(10):
    estudiantes.append(estudiante())

for i in estudiantes:
    print("Ingrese estudiante: ")
    i.ingresarNotas()

for i in estudiantes:
    i.imprimirNotas()
    print('\n')
