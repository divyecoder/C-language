#include<stdio.h>

void main(){
    int n;
    printf("enter the rows : ");
    scanf("%d",&n);
    for(int i=n; i>=1; i--){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        for(int k=1; k<=n; k++){
            printf("*");
        }
        printf("\n");
    }
}