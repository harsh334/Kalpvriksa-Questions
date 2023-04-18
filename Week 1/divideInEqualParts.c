
// -------------------program to divide the string in given equal parts------------

#include <stdio.h>
#include <stdlib.h>

void divideInEqualParts(char *str, int num)
{
    int stringLength = strlen(str);
    if (stringLength % num != 0)
    {
        printf("Cannot divide the string in equal parts ");
        return;
    }
    int sizeOfPart = stringLength / num;
    for (int i = 0; i < stringLength; i++)
    {
        if (i % sizeOfPart == 0)
        {
            printf("\n");
        }
        printf("%c", str[i]);
    }
}
int main()
{
    char inputString[30];
    int inputNumber;
    printf("Enter any string : ");
    gets(inputString);
    printf("\nEnter a number of parts you want to divide the string");
    scanf("%d", &inputNumber);
    divideInEqualParts(inputString, inputNumber);
    return 0;
}
