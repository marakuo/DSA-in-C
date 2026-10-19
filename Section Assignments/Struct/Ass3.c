#include <iso646.h>
#include <math.h>
#include <stdio.h>


/*
 * Define a structure named Product containing
 * product ID, name, price, and quantity.
 * Write a C program that:
 * • Stores information for 5 products using an array of structures.
 * • Reads the information of all products.
 * • Calculates the value of each product using price × quantity.
 * • Calculates the total inventory value.
 * • Searches for a product using its ID and displays its information if found.
 */
typedef struct {
    char name[50];
    int ID, quantity;
    float price;
}Product;

void printProduct(Product product) {
    printf("Name: %s\n", product.name);
    printf("ID: %d\n", product.ID);
    printf("Quantity: %d\n", product.quantity);
    printf("Price: %.2f\n", product.price);
    printf("\n");
};


int main(void) {
    Product p[5];
    float value =0, total =0;
    int flag =0;
    for (int i =0; i < 5; i++) {
        printf("Enter product name: \n");
        scanf("%49s", p[i].name);
        printf("Enter product ID: ");
        scanf("%d", &p[i].ID);
        printf("Enter product quantity: ");
        scanf("%d", &p[i].quantity);
        printf("Enter product price: ");
        scanf("%f", &p[i].price);
        value =p[i].price * p[i].quantity;
        printf("%49s : %.2f\n", p[i].name, value);
        total += value;
    }
    printf("Total price: %.2f\n", total);
    int searchID;
    printf("Enter product ID to be searched: \n");
    scanf("%d", &searchID);
    for (int i =0; i < 5; i++) {
        if (searchID == p[i].ID) {
            flag = 1;
            printProduct(p[i]);break;


        }
    }
    if (flag == 0) {
        printf("Not found\n");
    }



    return 0;
}

