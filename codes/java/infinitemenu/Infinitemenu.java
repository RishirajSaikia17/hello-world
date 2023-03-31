import java.util.Scanner;

class Infinitemenu {
    public static void main(String[] args) {
        int choice, val=0;
        while(val == 0) {
            System.out.println("Select one of the options:- ");
            System.out.println("1. Option A");
            System.out.println("2. Option B");
            System.out.println("3. Option C");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            Scanner sc = new Scanner(System.in);
            choice = sc.nextInt();
            
            switch(choice) { 
                case 1:
                System.out.println("You have selected option A.\n");
                break;
                case 2:
                System.out.println("You have selected option B.\n");
                break;
                case 3:
                System.out.println("You have selected option C.\n");
                break;
                case 4:
                System.out.println("Exiting program...\n");
                sc.close();
                val = 1;
                break;
                default:
                System.out.println("Invalid choice.\n");
                break;
            }
        }
    }
}