#include<stdio.h>

void main(){
    int n;
    printf("enter row : ");
    scanf("%d",&n);
    for(int i=1; i<=n*2-1; i++){
        printf("%c",64+i);
    }
    printf("\n");
    for(int i=1; i<n; i++){
        for(int j=1; j<=n-i; j++){
            printf("%c",64+j);
        }
        for(int k=1; k<=i*2-1; k++){
            printf(" ");
        }
        for(int l=n+i; l<=2*n-1; l++){
            printf("%c",64+l);
        }
        printf("\n");
    }
}