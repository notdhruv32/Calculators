a = int(input("Enter the first no.= "))
b = int(input("Enter the second no.= "))
c = input("Operator: ")

if c == "*":
    result = a*b
    print("Result = ", result)
elif c == "/":
    result = a/b
    print("Result = ", result)
elif c == "-":
    result = a-b
    print("Result = ", result)
elif c == "+":
    result = a+b
    print("Result = ", result)
else:
    print("Unidentified error")

