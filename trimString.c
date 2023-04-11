// ---------trim the white spaces in the string---------

#include <stdio.h>
#include <string.h>

void trim(char inputString[30])
{
    printf("'");
    for (int index = 0; index < strlen(inputString); index++)
    {
        if (inputString[index] != ' ')
        {   
            printf("%c", inputString[index]);
        }
    }
    printf("'");
}
int main()
{
    char inputString[20];
    printf("enter a sentance : ");
    scanf("%[^\n]%*c", inputString);
    printf("entered inputString : '%s'\n", inputString);
    printf("after trim : ");
    trim(inputString);
    return 0;
}
