#include <stdio.h>
#include <stdlib.h>
//relational operators: > < <= >= == !
//control structures
//1. selection/decision making/conditional - if
void menu();
int main()
{
    printf("\tWelcome to zetech C Snack Shop!\n");
    menu();
    return 0;
}

void menu()
{
    int item;
    printf("\tToday's Menu\n");
    printf("1.Hamburger - Ksh. 50\n");
    printf("2.Samosa - Ksh. 50\n");
    printf("3.Coffee - Ksh. 50\n");
    printf("Enter Item No:");
    scanf("%d",&item);
    if(item > 0 && item <= 3)
    {
        printf(("Item added to cart\n");
    }
    else
    {
        printf("Invalid item\n");
        menu();
    }
    return item;
}
