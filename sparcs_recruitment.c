#include<stdio.h>

void charmagneDuyag();

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
                charmagneDuyag();
                break;
            case 3:
                // put function here
                printf("Test 3\n");
                break;
            case 4:
                beaTotanes();
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

void charmagneDuyag(){
    printf("\nName: Charmagne Jane Duyag\n");
    printf("Nickname: Penpen\n");
    printf("Course: BS Computer Science\n");
    printf("Year: 1\n");
    printf("Age: 18\n");
    printf("Location: General Santos City\n");
    printf("Favorite Programming Language: Python\n");
    printf("Hobbies: Reading, Watching TV Series, Listening to Music, & Journaling\n\n");
}