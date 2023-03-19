import java.util.Scanner;

class Primeno {
    public static void main(String[] args) {
        int n,i;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number: ");
        n = sc.nextInt();
        sc.close();
        if(n == 1) {
            System.out.println("The smallest prime number is 2.");
        }
        for(i=2; i<=n; i++) {
            if(n%2 == 0) {
                System.out.println("The number is not prime.");
                break;
            }
        }
        if(n == i) {
            System.out.println("The number is prime.");
        }
    }
}