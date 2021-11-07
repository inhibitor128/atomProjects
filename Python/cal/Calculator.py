def calcular():
    print('                       Two digit calculator\n')
    print('                         Choice Operator')
    print('+ = addition | - = subtraction | * = multiplication | / = devision\n')
    num1 = input('Enter whole number one: ')
    choice = input('Enter operator:  ')
    num2 = input('Enter whole number two: ')
    quotient = 0
    remander = 0
    product = 0

    quotient = int(num1/num2)
    product = quotient * num2
    remander = num1 % num2
    if remander == 0:
        return "{num1} / {num2} = {quotient}".format(num1=num1, num2=num2, quotient=quotient)
    else:
        return "{num1} / {num2} = {quotient} R {remander}\n\t  {product}".format(num1=num1, num2=num2, quotient=quotient, remander=remander, product=product)

print(calcular())
