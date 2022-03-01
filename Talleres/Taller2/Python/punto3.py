class Fecha:
    def __init__(self):
        self.fecha1 = list()
        self.fecha2 = list()
        self.fecha1Dia = 0
        self.fecha2Dia = 0

    def leerFechas(self):
        fec1 = input("Ingrese la fecha 1 (DD/MM/AAAA): ")
        fec2 = input("Ingrese la fecha 2 (DD/MM/AAAA): ")
        i = 0
        while i < 5:
            self.fecha1.append(int(fec1[i:i+2]))
            self.fecha2.append(int(fec2[i:i+2]))
            i += 3
        self.fecha1.append(int(fec1[6:10]))
        self.fecha2.append(int(fec2[6:10]))

    def calcularDias(self):

        self.fecha1Dia = self.fecha1[0] + self.fecha1[1]*30 + self.fecha1[2]*365
        self.fecha2Dia = self.fecha2[0] + self.fecha2[1]*30 + self.fecha2[2]*365

    def calcularDiferencia(self):
        print("La diferencia es de " + str(abs(self.fecha1Dia - self.fecha2Dia)) + " Dias")
    def operar(self):
        self.leerFechas()
        self.calcularDias()
        self.calcularDiferencia()

dia = Fecha()

dia.operar()
