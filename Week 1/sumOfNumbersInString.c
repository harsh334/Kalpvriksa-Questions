// ----------print the sum of character numbers in string----------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int array[20];
    char inputString[20];
    char *token;
    int index=0;
    int sum=0;
    printf("enter a comma seprated string ");
    scanf("%[^\n]s",&inputString);
    printf("\n");
    printf("entered string : %s\n",inputString);
    token = strtok(inputString,",");
    while (token != NULL) {
        sum+=atoi(token);
        array[index]=atoi(token);
        index+=1;
        token = strtok(NULL, ",");
    }
    printf("sum of numbers in entered string : %d",sum);
    return 0;
}
