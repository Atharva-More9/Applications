//switch case implementation using the example of a restaurant

#include <stdio.h>

void Starters(int StarterChoice) {
    switch (StarterChoice) {
        case 1:
            printf("The Starter Ordered is Chicken Tikka\n");
            break;
        case 2:
            printf("The Starter Ordered is Chicken Manchurian\n");
            break;
        case 3:
            printf("The Starter Ordered is Paneer Kebab\n");
            break;
        case 4:
            printf("The Starter Ordered is Veg Platter\n");
            break;
        default:
            printf("The Entered choice is incorrect\n");
            break;
    }
}

void MainCourses(int MainCourseChoice) {
    switch (MainCourseChoice) {
        case 1:
            printf("The Maincourse Ordered is Butter Chicken\n");
            break;
        case 2:
            printf("The Maincourse Ordered is Paneer Pasanda\n");
            break;
        case 3:
            printf("The Maincourse Ordered is Mix Veg\n");
            break;
        case 4:
            printf("The Maincourse Ordered is Prawns Curry\n");
            break;
        default:
            printf("The Entered choice is incorrect\n");
            break;
    }
}

void Desserts(int DessertChoice) 
{
    switch (DessertChoice) {
        case 1:
            printf("The Dessert Ordered is Sizzling Brownie\n");
            break;
        case 2:
            printf("The Dessert Ordered is Gulabjam\n");
            break;
        case 3:
            printf("The Dessert Ordered is Moong dal halwa\n");
            break;
        case 4:
            printf("The Dessert Ordered is Jalebi Rabdi\n");
            break;
        default:
            printf("The Entered choice is incorrect\n");
            break;
    }
}

void Drinks(int DrinksChoice) 
{
    switch (DrinksChoice) {
        case 1:
            printf("The Drink Ordered is Virgin Mojito\n");
            break;
        case 2:
            printf("The Drink Ordered is Blue Lagoon\n");
            break;
        case 3:
            printf("The Drink Ordered is Pina Colada\n");
            break;
        case 4:
            printf("The Drink Ordered is Green Apple\n");
            break;
        default:
            printf("The Entered choice is incorrect\n");
            break;
    }
}

int main() 
{
    int Starter = 0;
    int MainCourse = 0;
    int Dessert = 0;
    int Drink = 0;

    printf("Welcome to our Restaurant\n");

    printf("What Starter would you like to order?\n");
    printf("Starters:\n 1. Chicken Tikka\n 2. Chicken Manchurian\n 3. Paneer Kebab\n 4. Veg Platter\n");
    scanf("%d", &Starter);
    Starters(Starter);

    printf("What Maincourse Would you Like to order?\n");
    printf("MainCourse:\n 1. Butter Chicken\n 2. Paneer Pasanda\n 3. Mix Veg\n 4. Prawns Curry\n");
    scanf("%d", &MainCourse);
    MainCourses(MainCourse);

    printf("What would you like for dessert?\n");
    printf("Dessert:\n 1.Sizzling Brownie\n 2.Gulabjam\n 3.Moong dal halwa\n 4.Jalebi Rabdi\n");
    scanf("%d",&Dessert);
    Desserts(Dessert);

    printf("Which Drink would you like to order?\n");
    printf("Drinks:\n 1.Virgin Mojito\n 2.Blue Lagoon\n 3.Pina Colada\n 4.Green Apple\n");
    scanf("%d",&Drink);
    Drinks(Drink);

    printf("Your final Order is :\n");
    Starters(Starter);MainCourses(MainCourse);Desserts(Dessert);Drinks(Drink);
    return 0;
}
