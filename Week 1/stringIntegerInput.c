// ----------enter a string and number and print them seperately-------------

#include <stdio.h>
#include <string.h>

int main(){
    char inputString[10];
    int inputNumber;
    printf("enter a string followed by a number with a white space in between : ");
    scanf("%s %d",&inputString,&inputNumber);
    printf("you entered %d as a number\n",inputNumber);
    printf("you entered %s as a string",inputString);
} 
