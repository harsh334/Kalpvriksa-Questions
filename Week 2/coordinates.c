// ----------print the start and end coordinates of a line seperately-------------

#include <stdio.h>
#include <string.h>

int main(){
    char firstCoordinate[4],secondCoordinate[4];
    printf("enter the coordinates of form (x,y):(x,y) : ");
    scanf("(");
    scanf("%[^')']",firstCoordinate);
    scanf(") : (");
    scanf("%[^')']",secondCoordinate);
    printf("first coordinate : %s \n",firstCoordinate);
    printf("second coordinate : %s ",secondCoordinate);
} 
