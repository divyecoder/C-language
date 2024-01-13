#include<stdio.h>

void main(){
    int n,count; 
    printf("enter row : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        count = i;
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%d",k);
        }
        for(int l=1; l<i; l++){
            count = count -1;
            printf("%d",count);
        }
        printf("\n");
    }
}
