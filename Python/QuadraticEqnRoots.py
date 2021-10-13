#The below program finds the roots of the quadratic equation
print("\t ROOTS OF QUADRATIC EQUATION")
print("\nINPUT:")
print("Enter the coefficients of:-")
a=float(input("\t\t   x2: "))
b=float(input("\t\t    x: "))
c=float(input("\t\tconst: "))
print("\nOUTPUT:")
import math
d=b**2-(4*a*c)
if d>=0:
    r1=(-b+math.sqrt(d))/(2*a)
    r2=(-b-math.sqrt(d))/(2*a)
    print("The roots of (",a,")x2+(",b,")x+(",c,") is",r1,"and",r2)
else:
    print("The roots of (",a,")x2+(",b,")x+(",c,") is imaginary")
