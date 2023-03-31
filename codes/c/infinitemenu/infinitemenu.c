#include<stdio.h>

int main() {
    int choice;
    while(1) {
        printf("\nEnter your choice:- \n");
        printf("1. Option A\n");
        printf("2. Option B\n");
        printf("3. Option C\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
            printf("You have selected option A.\n");
            break;
            case 2:
            printf("You have selected option B.\n");
            break;
            case 3:
            printf("You have selected option C.\n");
            break;
            case 4:
            printf("Exiting program...\n\n");
            return 0;
            default:
            printf("Invalid choice.\n");
            break;
        }
    }
    return 0;
}