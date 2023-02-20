import java.util.Scanner;

class Sumofdigits {
    public static void main(String[] args) {
        int n, a, sum=0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        n = sc.nextInt();
        sc.close();
        while(n>0) {
            a = n % 10;
            n = n/10;
            sum = sum + a;
        }
        System.out.println("Sum of digits: " + sum);
    }
}