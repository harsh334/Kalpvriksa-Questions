#include <stdio.h>
#include <string.h>

int main(){
    char str[20]="hello12gh5";
    for(int i=0;i<strlen(str);i++){
        if(str[i]>'0'&&str[i]<'9'){
            printf("%c",str[i]);
        }
    }
    return 0;
}