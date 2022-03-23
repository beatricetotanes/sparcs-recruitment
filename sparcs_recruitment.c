#include<stdio.h>

void YnahDimpaso();

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
                // put function here
                printf("Test 1\n");
                break;
            case 2:
                // put function here
                printf("Test 2\n");
                break;
            case 3:
                // put function here
                YnahDimpaso();
                break;
            case 4:
                printf("Test 3\n");
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

void YnahDimpaso(){
    printf("\nName: Ladeena Dimpaso\n");
    printf("Nickname: Ynah\n");
    printf("Course: BS Computer Science\n");
    printf("Year: 2\n");
    printf("Age: 20\n");
    printf("Location: Midsayap, North Cotabato\n");
    printf("Favorite Programming Language: c++\n");
    printf("Hobbies: Playing online games, listening to music, and sleeping\n\n");
}