value = input("Enter the value of temperature: ")
temperature = input("Enter the unit in Celcius(c) or Fahrenheit(h): ")

if temperature == str('c'):
    answer = (int(value) * 9/5) + 32
    print("The value in Fahrenheit: " + str(answer) + "F")

elif temperature == str('h'):
    answer = (int(value) -32) * 5/9
    print("The value in Celcius: " + str(answer) + "C")

else:
    print("Invalid unit of temperature")