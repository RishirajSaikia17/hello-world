import java.util.Scanner;

class Factorial {
    public static void main(String[] args) {
        int n,i, fect=1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        sc.close();
        for(i=1; i<=n; i++) {
            fect = fect * i;
        }
        System.out.println("Factorial is " + fect);
    }
}