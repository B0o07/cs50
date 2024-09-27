#include <cs50.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
    {
        srand((unsigned) time(NULL));
        int a = rand() % 8 + 1;
        int n;
        while (true)
        {
            n = get_int("Which door it's: ");

            if (n < 1 || n > 8)
        {
            printf("This door doesn't exist! Please choose a number between 1 and 8.\n");
            continue;
        }
            else if (n == a)
            {
                printf("Congratulations, the number is %d, so your awnser is right!\n", a);
                break;
            }
            else if (n <= a)
            {
                printf("This number is more to the right of the door!.\n");
            }
            else if (n >= a)
            {
                printf("This number is more to the left of the door!.\n");
            }
        }

        return 0;
    }

