#include <stdio.h>

int main(int argc, char const *argv[])
{
    #define hiddenNum 7
    int guessNum;

    printf("Enter your guess: ");
    scanf("%d",&guessNum);

    while (guessNum != hiddenNum)
    {
        printf("This isnt the right number, Try again.\n");
        printf("Enter your guess: ");
        scanf("%d",&guessNum);
    }
    
    printf("This is the right number");
    return 0;
}
