#include<stdio.h>

void main(){
    int row,col;
    printf("no of row : ");
    scanf("%d",&row);
    printf("no of col : ");
    scanf("%d",&col);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            printf("*");
        }
        printf("\n");
    }
}