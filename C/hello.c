#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name: ");
    int age = get_int("How old are you: ");

    printf("Hello, %s!\nYou are %i years old, that's very cool!\n", answer, age);
    if (age < 18)
    {
        printf("%s you still underage!\n", answer);
    }
    else if (age > 18)
    {
        printf("%s you're an adult!\n", answer);
    }
}
