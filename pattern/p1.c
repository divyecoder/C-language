#include<stdio.h>

void main(){
    int a = 4 , b = 4;
    
    for(int i = 1; i <= a; i++){
        for(int i = 1; i <= b; i++){
            printf("*");
        }
        printf("\n");
    }
}
