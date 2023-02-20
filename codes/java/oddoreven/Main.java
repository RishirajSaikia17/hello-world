import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        int a;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        a = sc.nextInt();
        sc.close();
        if(a % 2 == 0) {
            System.out.println("The entered number is even.");
        }
        else {
            System.out.println("The entered number is odd.");
        }
    }
}