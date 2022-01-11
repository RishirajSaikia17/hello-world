import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int first, second, sum;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        first = scan.nextInt();
        System.out.print("Enter the second number: ");
        second = scan.nextInt();
        sum = first + second;
        System.out.print("Sum: " + sum);
        scan.close();
    }
}
