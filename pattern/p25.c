#include<stdio.h>

void main(){
    int n;
    printf("enter the rows : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%c",64+k);
        }
        printf("\n");
    }
}