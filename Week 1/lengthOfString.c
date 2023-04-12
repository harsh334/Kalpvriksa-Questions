// -----------print the length of the entered string----------------

#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char inputString[20];
    int index = 0;
    printf("enter a string: ");
    scanf("%s", &inputString);
    while (inputString[index] != '\0')
    {
        index += 1;
    }
    printf("entered string : %s\n", inputString);
    printf("length of the string : %d", index);
    return 0;
}