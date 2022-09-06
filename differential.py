expo = int(input("Enter exponent of x: "))
coef = int(input("Enter the coefficient of x: "))
diffrential = expo * coef
exporeduc = expo - 1
if expo == 0:
    print(f"Therefore d/dx({coef}) = 0")
elif expo == 1:
    print(f"Therefore d/dx({coef}x) = {coef}")
elif expo <= -1:
     exporeduc = -exporeduc
     print(f"Therefore d/dx({coef}x^{expo}) = {diffrential}/x^{exporeduc}")
else:
     print(f"Therefore d/dx({coef}x^{expo}) = {diffrential}x^{exporeduc}")
