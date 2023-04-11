// ----------------print even numbers out of string of this {x,x,x,x} format --------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char array[20];
    char *token;
    printf("enter input in the form {x,x,x} : ");
    scanf("{");
    scanf("%[^'}']", array);
    token = strtok(array, ",");
    while (token != NULL)
    {
        if (atoi(token) % 2 == 0)
        {
            printf("%d ", atoi(token));
        }
        token = strtok(NULL, ",");
    }
    return 0;
}
