// ----------convert roman numbers to integers ---------

#include <stdio.h>
#include <string.h>

int romanToInteger(char s){
    switch(s){
        case 'I' : return 1;
        case 'V' :return 5;
        case 'X' :return 10;
        case 'L' :return 50;
        case 'C' :return 100;
        case 'D' :return 500;
        case 'M' :return 1000;
        default : return 0;
    }
}
int main(){
    char str[10];
    printf("enter a roman number : ");
    scanf("%s",&str); 
    char intNumber = romanToInteger(str[0]);
    for(int i=1;i<strlen(str);i++){
        char prevChar = romanToInteger(str[i-1]);
        char currentChar =romanToInteger(str[i]);
        if(prevChar < currentChar){
            intNumber = intNumber-prevChar + (currentChar-prevChar);
        } else{
            intNumber+=currentChar;
        }
    }
    printf("%d",intNumber);
    return 0;
}