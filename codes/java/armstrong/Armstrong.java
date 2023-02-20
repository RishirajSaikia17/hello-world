import java.util.Scanner;

class Armstrong {
    public static void main(String[] args) {
        int n, a, b, arm=0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        n = sc.nextInt();
        sc.close();
        b = n;
        while(n>0) {
            a = n % 10;
            n = n / 10;
            arm = arm + a*a*a;
        }
        if(arm == b) {
            System.out.println("The number is armstrong.");
        }
        else {
            System.out.println("The number is not armstrong.");
        }
    }
}