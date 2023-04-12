// -----------count the number of words in sentance----------

#include <stdio.h>
#include <string.h>

int main()
{   
    char inputString[30]; 
    int count=0;
    char delim[]=" \n\t";
    char *token;
    printf("enter a string : ");
    scanf("%[^\n]",&inputString);
    printf("Entered String : %s\n",inputString);
    token=strtok(inputString,delim);
    while(token!=NULL){
        count++;
        token=strtok(NULL,delim);
    }
    printf("%d ",count);
    return 0;
}