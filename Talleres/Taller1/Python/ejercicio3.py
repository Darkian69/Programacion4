#Ejercicio 3. Construir un programa que permita calcular el volumen, el área y el perímetro de seis
#cilindros.
#volumen π r² h,
#area 2 π rh + 2 π r 2 . o 2pir(r+h)
#perimetro 2pir + h

class cilindro:
    def __init__(self, radio, altura):
        self.radio = float(radio)
        self.altura = float(altura)

    def volumen(self):
        result = float((self.radio**2)*self.altura*3.14)
        return result
    def area(self):
        result = 2*3.14*self.radio*(self.radio + self.altura)
        return result
    def perimetro(self):
        result = 2*3.14*self.radio + self.altura
        return result
    def mostrar(self):
        print("volumen: ", self.volumen())
        print("Area: ", self.area())
        print("Perimetro: ", self.perimetro())



cilindros = []
cilindros.append(cilindro(10, 2))
cilindros.append(cilindro(15, 9))
cilindros.append(cilindro(20, 10))
cilindros.append(cilindro(5, 12))
cilindros.append(cilindro(8, 9))
cilindros.append(cilindro(12, 4))

for i in range(6):
    print("Cilindro ", i+1)
    cilindros[i].mostrar()
    print('\n')
