#include<stdio.h>

void beaTotanes();
void kayeJose();

// updated

int main(){
    int choice;

    do
    {
        printf("Choose profile below: \n");
        printf("\t[1] Kaye Jose\n");
        printf("\t[2] Charmagne Duyag\n");
        printf("\t[3] Ynah Dimpaso\n");
        printf("\t[4] Beatrice Totanes\n");
        printf("\t[5] Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                kayeJose();
                break;
            case 2:
                // put function here
                printf("Test 2\n");
                break;
            case 3:
                // put function here
                printf("Test 3\n");
                break;
            case 4:
                // put function here
                printf("Test 2\n");
                break;
            case 5:
                // put function here
                break;
            default:
                printf("Invalid entry\n");
                break;
        }
    } while (choice != 5);
    
}

void beaTotanes(){
    printf("\nName: Beatrice Totanes\n");
    printf("Nickname: Bea\n");
    printf("Course: BS Computer Science\n");
    printf("Year: 3\n");
    printf("Age: 21\n");
    printf("Location: Davao City\n");
    printf("Favorite Programming Languages: C++ & Dart\n");
    printf("Hobbies: Reading & Watching Movies\n\n");
}
void kayeJose(){
    printf("\nName: Kaye Jose\n");
    printf("Nickname: Kay\n");
    printf("Course: BS Computer Science\n");
    printf("Year: 1\n");
    printf("Age: 19\n");
    printf("Location: Davao City\n");
    printf("Favorite Programming Languages: C, Python\n");
    printf("Hobbies: Reading\n\n");
}