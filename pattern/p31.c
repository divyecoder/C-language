#include<stdio.h>

void main(){
    int n;
    printf("enter rows : ");
    scanf("%d",&n);
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(i>j){
                printf("%d",i);
            }
            else{
                printf("%d",j);
            }
        }
        for(int k=2; k<=n; k++){
            if(i>k){
                printf("%d",i);
            }
            else{
                printf("%d",k);
            }
        }
        printf("\n");
    }
    for(int i=2; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(i>j){
                printf("%d",i);
            }
            else{
                printf("%d",j);
            }
        }
        for(int k=2; k<=n; k++){
            if(i>k){
                printf("%d",i);
            }
            else{
                printf("%d",k);
            }
        }
        printf("\n");
    }
}