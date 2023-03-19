package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Print("Enter the first number: ")
	fmt.Scan(&a)
	fmt.Print("Enter the second number: ")
	fmt.Scan(&b)
	c = a + b
	fmt.Println("Sum:", c)
}
