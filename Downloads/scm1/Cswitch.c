#include <stdio.h>

int main() {
    int choice;

    
    printf("Welcome to the Menu!\n");
    printf("Please choose an option:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("4. Option 4\n");
    printf("5. Option 5\n");
    printf("Enter your choice (1-5): ");
    
    
    scanf("%d", &choice);

    
    switch (choice) {
        case 1:
            printf("You selected Option 1.\n");
            break;
     
