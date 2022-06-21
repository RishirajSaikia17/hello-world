print("Operators:- (+) (-) (*) (/) (**)")
first = input("First number: ")
operator = input("Operator: ")
second = input("Second number: ")

if operator == str("+"):
    print("Sum: " + str(int(first) - int(second)))

elif operator == str("-"):
    print("Difference: " + str(int(first) - int(second)))

elif operator == str("*"):
    print("Product: " + str(int(first) * int(second)))

elif operator == str("/"):
    print("Quotient: " + str(int(int(first) / int(second))))
    print("Remainder: " + str(int(first) % int(second)))

elif operator == str("**"):
    print("Square:" + str(int(first) ** int(second)))

else:
    print("Invalid operator.")