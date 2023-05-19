class Funzione:
    def eval(self, x):
        pass

    def calcola_integrale(self, a, b, M):
        h=(b-a)/M
        ris=0
        for i in range(M):
            ris+=self.eval(a+i*h)
        return h*ris
        
class Parabola(Funzione):
    
    def eval(self, x):
        return x**2-2*x
   

parabola1=Parabola()
integrale1 = parabola1.calcola_integrale(0,1,1000000000)
print("Primo integrale: ",integrale1)