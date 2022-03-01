
class Tiempo:
    #atributos
    def __init__(self):
        self.instante1 = list()
        self.instante2 = list()
        self.instante1Seg = 0
        self.instante2Seg = 0

    #Metodos
    def leerInstante(self):
        inst1 = input("Ingrese el tiempo 01 (HH:MM:SS): ")
        inst2 = input("Ingrese el tiempo 02 (HH:MM:SS): ")
        i = 0
        while i < 8:
            self.instante1.append(int(inst1[i:i+2]))
            self.instante2.append(int(inst2[i:i+2]))
            i += 3
    def calcularSegundos(self):
        self.instante1Seg = self.instante1[0]*3600 + self.instante1[1] * 60 + self.instante1[2]
        self.instante2Seg = self.instante2[0]*3600 + self.instante2[1] * 60 + self.instante2[2]

    def calcularDiferencia(self):
        print("La diferencia en segundos es: " + str(abs(self.instante1Seg - self.instante2Seg)) + "segundos")

    def operar(self):
        self.leerInstante()
        self.calcularSegundos()
        self.calcularDiferencia()


tiempoxd = Tiempo()

tiempoxd.operar()
