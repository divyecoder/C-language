#include<stdio.h>

void main(){
    int row,col;
    printf("enter the row : ");
    scanf("%d",&row);
    printf("enter the col : ");
    scanf("%d",&col);
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || j==1 || i==row || j==col){
                printf("*");
            }
            else{
                printf(" ");
        }
    }
    printf("\n");
}
}