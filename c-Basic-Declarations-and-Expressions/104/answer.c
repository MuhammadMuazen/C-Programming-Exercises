#include <stdio.h>

int main (void) {

    float input_price, new_price;

    printf("Input the item price: ");
    scanf("%f", &input_price);

    if(input_price >= 100.00 && input_price <= 400.00) {
        new_price = input_price + (input_price * (14.00 / 100.00));
        printf("New Item price: %.2f\n", new_price);
        printf("Increased price: %.2f\n", new_price - input_price);
        printf("Increase Percentage: 14%%");
    }
    else if(input_price > 400.00 && input_price <= 800.00) {
        new_price = input_price + (input_price * (11.00 / 100.00));
        printf("New Item price: %.2f\n", new_price);
        printf("Increased price: %.2f\n", new_price - input_price);
        printf("Increase Percentage: 11%%");
    }
    else if(input_price > 800.00 && input_price < 1200.00) {
        new_price = input_price + (input_price * (9.00 / 100.00));
        printf("New Item price: %.2f\n", new_price);
        printf("Increased price: %.2f\n", new_price - input_price);
        printf("Increase Percentage: 9%%");
    }
    else if(input_price > 1200.00 && input_price <= 2000.00) {
        new_price = input_price + (input_price * (6.00 / 100.00));
        printf("New Item price: %.2f\n", new_price);
        printf("Increased price: %.2f\n", new_price - input_price);
        printf("Increase Percentage: 6%%");
    }
    else if(input_price > 2000.00) {
        new_price = input_price + (input_price * (3.00 / 100.00));
        printf("New Item price: %.2f\n", new_price);
        printf("Increased price: %.2f\n", new_price - input_price);
        printf("Increase Percentage: 3%%");
    }

    return 0;
}
