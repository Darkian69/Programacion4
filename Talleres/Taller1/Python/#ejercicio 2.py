#ejercicio 2
#Construir un programa que permita calcular el área y el perímetro de cuatro
#triángulos.

from re import A


class triangulo:
    def __init__(self, base, altura, a, b, c):
        self.base = base
        self.altura = altura
        self.a = a 
        self.b = b
        self.c = c
    
    def area(self):
        areaa = str((self.base*self.altura)/2)
        return areaa
        
    def perimetro(self):
        perimetroo = str(self.a + self.b + self.c)
        return perimetroo


t1 = triangulo(10, 20, 30, 12, 10)
t2 = triangulo(21, 30, 12, 30, 12)
t3 = triangulo(15, 25, 10, 20, 30)
t4 = triangulo(12, 31, 23, 11, 14)

print("triangulo 1: ")
print("Area: " + t1.area())
print("Perimetro: " + t1.perimetro())

print("triangulo 2: ")
print("Area: " + t2.area())
print("Perimetro: " + t2.perimetro())

print("triangulo 3: ")
print("Area: " + t3.area())
print("Perimetro: " + t3.perimetro())

print("triangulo 4: ")
print("Area: " + t4.area())
print("Perimetro: " + t4.perimetro())

