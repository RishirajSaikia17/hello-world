import java.util.Scanner;

class Palindrome {
    public static void main(String[] args) {
        int n, a, b, temp=0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        n = sc.nextInt();
        sc.close();
        b = n;
        while(n>0) {
            a = n % 10;
            n = n / 10;
            temp = temp * 10 + a;
        }
        if(temp == b) {
            System.out.println("The number is palindrome.");
        }
        else {
            System.out.println("The number is not palindrome.");
        }
    }
}