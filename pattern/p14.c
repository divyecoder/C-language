#include<stdio.h>

void main(){
    for(int i=1; i<=5; i++){
        for(int j=i; j<5; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=4; i>=1; i--){
        for(int j=i; j<=4; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
}