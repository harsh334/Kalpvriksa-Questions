#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char array[20];
    char *token;
    printf("enter input in the form {xxx} : ");
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