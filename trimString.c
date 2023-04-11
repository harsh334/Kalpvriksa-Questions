#include <stdio.h>
#include <string.h>

void trim(char str[20]){
    for(int i=0;i<strlen(str);i++){
       if(str[i]!=' '){
        printf("%c",str[i]);
       }
    }
}
int main(){   
    char str[20];
    printf("enter a sentance : ");
    scanf("%[^\n]%*c",str);
    printf("entered string : %s\n",str);
    printf("after trim : ");
    trim(str);
    return 0;
}
