// ---------------------program to find substring from a string----------

#include <stdio.h>
#include <string.h>

void getSubstring(char inputString[], char subString[], int position, int stringLength)
{
    int c = 0;
    while (c < stringLength)
    {
        subString[c] = inputString[position + c - 1];
        c++;
    }
    subString[c] = '\0';
}

int main()
{
    char inputString[1000];
    char subString[1000];
    int position, length, c = 0;
    printf("Enter a string : ");
    gets(inputString);
    printf("Enter the position and length of substring\n");
    scanf("%d%d", &position, &length);
    getSubstring(inputString, subString, position, length);
    printf("Required substring is %s", subString);
    return 0;
}
