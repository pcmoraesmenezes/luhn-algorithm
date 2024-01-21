#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char num[50];
    char nome[50];
    char marca[50];

    printf("We will check if your credit card is valid or not\n");
    printf("Enter the credit card number, please do not include spaces:\n");
    scanf("%s", num);
    printf("Enter your name:\n");
    scanf("%s", nome);
    printf("Enter the card brand:\n");
    scanf("%s", marca);

    int sum = 0;
    int length = strlen(num);

    for (int i = length - 1; i >= 0; i--) {
        int digit = num[i] - '0';

        if ((length - i) % 2 == 0) {
            digit *= 2;

            if (digit > 9) {
                digit = digit - 9;
            }
        }

        sum += digit;
    }

    if (sum % 10 == 0) {
        printf("Congratulations, %s, your card from the %s agency is valid!\n", nome, marca);
    } else {
        printf("Unfortunately, your card is not valid.\n");
    }

    return 0;
}