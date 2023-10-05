#include <stdio.h>

int main()
{
    int pen = 100;
    int pencil = 200;
    int eraser = 300;
    int sharpener= 150;
    int colorPencil=40;
    
    int choice, quantity;

    while (1) {
        printf("Which product would you like to buy?\n");
        printf("1. Pen - Stock: %d\n", pen);
        printf("2. Pencil - Stock: %d\n", pencil);
        printf("3. Eraser - Stock: %d\n", eraser);
        printf("4. Sharpener - Stock: %d\n", sharpener);
        printf("5. colorPencil - Stock: %d\n", colorPencil);
        printf("Enter your choice (1-5) or 0 to exit: ");
        scanf("%d", &choice);
        if (choice == 0) break;
        if (choice < 1 || choice >=5) {
            printf("Invalid choice. Try again.\n");
            continue;
        }
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        if (choice == 1 && quantity > pen)
            printf("Sorry, product 1 is out of stock.\n");
        else if (choice == 2 && quantity >pencil)
            printf("Sorry, product 2 is out of stock.\n");
        else if (choice == 3 && quantity > eraser)
            printf("Sorry, product 3 is out of stock.\n");
        else if (choice == 4 && quantity >  sharpener)
            printf("Sorry, product 3 is out of stock.\n");
        else if (choice == 5 && quantity > colorPencil)
            printf("Sorry, product 3 is out of stock.\n");
        else {
            printf("Your order has been placed successfully.\n");
            if (choice == 1) pen-= quantity;
            if (choice == 2)  pencil-= quantity;
            if (choice == 3) eraser-= quantity;
            if (choice == 4) sharpener-= quantity;
            if (choice == 5) colorPencil-= quantity;
        }
    }

    return 0;
}
