#include <stdio.h>

int main() {
    int itemAmount;
    double itemPrice;

    do {
        printf("Input amount:");
        scanf("%d", &itemAmount);

        if (itemAmount < 0) {
            printf("Amount must be a positive value!\n");
            itemAmount = 0;
        } else {
            do {
                printf("Input price:");
                scanf("%lf", &itemPrice);

                if(itemPrice < 0) {
                    printf("Item price needs to be positive!\n");
                } else if (itemPrice > 10) {
                    printf("Item price needs to be less than 10 Euro!\n");
                }
            }while(itemPrice < 0 || itemPrice > 10);
        }

    }while(itemAmount == 0);

    printf("Amount: %d\n", itemAmount);
    printf("Price: %.2f\n", itemPrice);
}
