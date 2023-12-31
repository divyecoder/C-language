#include<stdio.h>

void main(){
    int no;
    printf("enter the number : ");
    scanf("%d", &no);
    for(int i = 1; i <= no; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
}