
// -------------------program to toggle the case of each character of string------------

#include <stdio.h>
#include <stdlib.h>

void toggleCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    puts(str);
}
int main()
{
    char inputString[20];
    printf("Enter any string : ");
    gets(inputString);
    toggleCase(inputString);
    return 0;
}
