import java.util.Scanner;

class Fibonacci {
    public static void main(String[] args) {
        int first=0, second=1, n, i, next;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter no. of terms: ");
        n = sc.nextInt();
        sc.close();
        System.out.println("Fibonacci series are: ");
        for(i=0; i<n; i++) {
            System.out.print(first + " ");
            next = first + second;
            first = second;
            second = next;
        }
    }
}