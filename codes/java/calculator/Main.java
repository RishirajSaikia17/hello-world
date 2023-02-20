import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int a, b, result;
        char operator;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        a = sc.nextInt();
        System.out.print("Enter the second number: ");
        b = sc.nextInt();
        System.out.print("Enter the operator: ");
        operator = sc.next().charAt(0);
        sc.close();
        switch(operator)
        {
            case '+':
            result = a + b;
            break;
            case '-':
            result = a - b;
            break;
            case '*':
            result = a * b;
            break;
            case '/':
            result = a / b;
            break;
            default:
            System.out.println("Invalid operator.");
            return;
        }
        System.out.println(a + " " + operator + " " + b + " = " + result);
    }
}