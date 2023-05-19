class Function:
    def eval(self, x):
        pass

    def f_hat(self, a, b):
        N=(a+b)/2
        N=int(N)
        ris=0
        for i in range(N):
            ris+=self.eval(a+i)
        return (1/N)*ris
        
class Parabola(Function):
    def eval(self, x):
        return (x**2)+2*x

parabola1=Parabola()
valore=parabola1.f_hat(1,3)
print("Valore: ", valore)

