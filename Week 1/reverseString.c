// -----------reverse the string----------

#include <stdio.h>
#include <string.h>

int main()
{   
    char inputString[30];
    int start=0;
    printf("enter a string : ");
    scanf("%[^\n]",&inputString);
    int end=strlen(inputString)-1;
    printf("Entered String : %s\n",inputString);
    while(start<end){
        char temp=inputString[start];
        inputString[start]=inputString[end];
        inputString[end]=temp;
        start++;
        end--;
    }
    printf("%s",inputString);
    return 0;
}