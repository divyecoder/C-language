#include<stdio.h>

void main(){
    int n;
    printf("enter row : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("%d",k);
        }
        printf("\n");
    }
}