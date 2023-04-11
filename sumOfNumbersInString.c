#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int arr[20];
    char str[20];
    char *token;
    int i=0;
    int sum=0;
    printf("enter a comma seprated string ");
    scanf("%[^\n]s",&str);
    printf("\n");
    printf("entered string : %s\n",str);
    token = strtok(str,",");
    while (token != NULL) {
        sum+=atoi(token);
        arr[i]=atoi(token);
        i+=1;
        token = strtok(NULL, ",");
    }
    printf("sum of numbers in entered string : %d",sum);
    return 0;
}
