import java.util.*;

class Temperature {
    public static void main(String[] args) {
        float c, f;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the temperature in celcius: ");
        c = sc.nextInt();
        f = (c*9/5) + 32;
        sc.close();
        System.out.println("The temperature in fahrenheit is " + f);
    }
}