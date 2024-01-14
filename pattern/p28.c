#include<stdio.h>

void main(){
    int n;
    printf("enter no of rows : ");
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i++){
        printf("*");
    }
    printf("\n");
    for(int i=1; i<n; i++){
        for(int j=i; j<n; j++){
            printf("*");
        }
        for(int k=1; k<=i*2-1; k++){
            printf(" ");
        }
        for(int l=i; l<n; l++){
            printf("*");
        }
        printf("\n");
    }
}
    