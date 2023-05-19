class Function:

    def eval(self, x):
        pass

        
    def calcola_media(self, a, b, n):
        ris=0
        
        for i in range(1, n+1):
            ris+=self.eval(a+(i-1))
        return ris/n
        

class Parabola(Function):
    def eval(self, x):
        return x**2+2*x

class Retta(Function):
    def eval(self, x):
        return (1/2)*x+35


parabola1=Parabola()
valore1=parabola1.calcola_media(3,6, 100000000000000)
print("valore 1: ", valore1)
retta1=Retta()
valore2=retta1.calcola_media(3,6,1000000000000000000)
print("valore 2: ", valore2)
