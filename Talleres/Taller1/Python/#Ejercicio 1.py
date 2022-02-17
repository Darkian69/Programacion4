import os
#Ejercicio 1
#Construir un programa que permita leer e imprimir los datos de tres clientes.

class cliente:
    #Constructor
    def __init__(self):
        self.nombre = ""
        self.cedula = ""
        self.edad = "" 
        self.genero = ""
    
    #leer datos 
    def getData(self):
       
        self.nombre = input("Ingrese nombre del cliente: ")
        self.cedula = input("Ingrese cedula del cliente: ")
        self.edad = input("Ingrese edad del cliente: ")
        self.genero = input("Ingrese genero del cliente: ")
        print('\n')
        os.system ("cls")     
    
    def showData(self):
        print("Nombre: " + self.nombre)
        print("Cedula: " + self.cedula)
        print("Edad: " + self.edad)
        print("Genero: " + self.genero)
        

    

cl1 = cliente()
cl2 = cliente()
cl3 = cliente()

print("Cliente 1")
cl1.getData()
print("Cliente 2")
cl2.getData()
print("Cliente 3")
cl3.getData()

print("Cliente 1: ")
cl1.showData()
print("\nCliente 2: ")
cl2.showData()
print("\nCliente 3: ")
cl3.showData()





        
