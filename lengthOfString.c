#include <stdio.h>

int main(){
    char str[20];
    int i=0;
    printf("enter a string : ");
    scanf("%s",&str);
    while(str[i]!='\0'){
        i+=1;
    }
    printf("entered string : %s\n",str);
    printf("length of the string : %d",i);
    return 0;
}