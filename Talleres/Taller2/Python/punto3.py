class Fecha:
    def __init__(self, fecha1, fecha2):
        self.fec1 = fecha1
        self.fec2 = fecha2
        self.fecha1 = list()
        self.fecha2 = list()
        self.fecha1Dia = 0
        self.fecha2Dia = 0
        self.diasbisiestos = 0

    def leerFechas(self):

        i = 0
        while i < 5:
            self.fecha1.append(int(self.fec1[i:i+2]))
            self.fecha2.append(int(self.fec2[i:i+2]))
            i += 3
        self.fecha1.append(int(self.fec1[6:10]))
        self.fecha2.append(int(self.fec2[6:10]))

    def calcularDias(self):
        i = self.fecha1[2]

        while i <= self.fecha2[2]:
            if (i % 4) == 0:
            #    print(i)
                self.diasbisiestos += 1
            i += 1

        diasMes = [0,31, 59, 90, 120, 151, 181, 212, 242, 273, 304, 334, 365]
        #print(self.fecha1[1])
        self.fecha1Dia = self.fecha1[0] + diasMes[self.fecha1[1] - 1] + self.fecha1[2]*365
        self.fecha2Dia = self.fecha2[0] + diasMes[self.fecha2[1] - 1] + self.fecha2[2]*365

    def calcularDiferencia(self):

        self.leerFechas()
        self.calcularDias()
        return (abs(self.fecha1Dia - self.fecha2Dia) + self.diasbisiestos )

    def operar(self):
        self.leerFechas()
        self.calcularDias()
        print("la difrencia en dias es: " + str(self.calcularDiferencia()))

#10856
#10858

#
# fec1 = input("Ingrese la fecha 1 (DD/MM/AAAA): ")
# fec2 = input("Ingrese la fecha 2 (DD/MM/AAAA): ")
#dia = Fecha("07/11/2002", "01/03/2022")
#print(dia.calcularDiferencia())
#
# dia.operar()
