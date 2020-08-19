#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int number, guess,nofg=1;
    srand(time(0));
    number = rand()%100 + 1;

    do
    {
        /* code */
        printf("Enter guess: ");
        scanf("%d",&guess);

        if (guess>number)
        {
            /* code */
            printf("Lower number please \n");
        }else if (guess<number)
        {
            printf("Higher number please \n");
        }else
        {
            printf("Yoooo!!! Guessed in %d attempts.",nofg);
        }
        nofg++;

    } while (guess!=number);
    

    

    return 0;
}