#include<stdio.h>

void main(){
    int n;
    printf("enter row : ");
    scanf("%d",&n);
    for(int i=1; i<=n*2-1; i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1; i<n; i++){
        for(int j=i; j<n; j++){
            printf("%d",j);
        }
        for(int k=1; k<=i*2-1; k++){
            printf(" ");
        }
        for(int l=n+i; l<=n*2-1; l++){
            printf("%d",l);
        }
        printf("\n");
    }
}