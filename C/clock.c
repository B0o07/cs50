#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ms = 0, s = 0, m = 0, h = 0;
        while(1 == 1)
        {
            ms++;
            printf("%i:%i:%i\n", h, m, s);

            if (ms > 10000)
            {
                s++;
                ms = 0;
            }

            else if  (s > 59)
            {
                m++;
                s = 0;
            }

            else if  (m > 59)
            {
                h++;
                m = 0;
            }

            else if  (h > 24)
            {
                h = 0;
            }
        }
        return 0;
}

