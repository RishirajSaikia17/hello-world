operator = input("Enter operator (+, -, *, /): ")

if operator == str("+") or operator == ("-") or operator == ("*") or operator == ("/"):
    first = input("First number: ")
    second = input("Second number: ")

    if operator == str("+"):
        print("Sum: " + str(int(first) + int(second)))

    elif operator == str("-"):
        print("Difference: " + str(int(first) - int(second)))

    elif operator == str("*"):
        print("Product: " + str(int(first) * int(second)))

    elif operator == str("/"):
        print("Quotient: " + str(int(int(first) / int(second))))
        print("Remainder: " + str(int(first) % int(second)))

else:
    print("Invalid operator.")