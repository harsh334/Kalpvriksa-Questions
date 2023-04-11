#include <stdio.h>
#include <string.h>

void trim(char inputString[20])
{
    for (int i = 0; i < strlen(inputString); i++)
    {
        if (inputString[i] != ' ')
        {
            printf("%c", inputString[i]);
        }
    }
}
int main()
{
    char inputString[20];
    printf("enter a sentance : ");
    scanf("%[^\n]%*c", inputString);
    printf("entered inputString : %s\n", inputString);
    printf("after trim : ");
    trim(inputString);
    return 0;
}
