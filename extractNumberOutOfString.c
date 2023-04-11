#include <stdio.h>
#include <string.h>

int main()
{
    char inputString[20] = "hello12gh5";
    for (int i = 0; i < strlen(inputString); i++)
    {
        if (inputString[i] > '0' && inputString[i] < '9')
        {
            printf("%c", inputString[i]);
        }
    }
    return 0;
}